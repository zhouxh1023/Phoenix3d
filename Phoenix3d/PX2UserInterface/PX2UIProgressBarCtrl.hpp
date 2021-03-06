/*
*
* �ļ�����	��	PX2UIProgressBarCtrl.hpp
*
*/

#ifndef PX2UIPROGRESSBARCTRL_HPP
#define PX2UIPROGRESSBARCTRL_HPP

#include "PX2UIPre.hpp"
#include "PX2InterpCurveFloatController.hpp"

namespace PX2
{

	class UIProgressBarCtrl : public InterpCurveFloatController
	{
		PX2_DECLARE_RTTI;
		PX2_DECLARE_NAMES;
		PX2_DECLARE_STREAM(UIProgressBarCtrl);

	public:
		UIProgressBarCtrl ();
		virtual ~UIProgressBarCtrl ();

		void SetProgressSpeed (float speed);
		float GetProgressSpeed () const;

		void SetProgressInit (float progress);

		void SetProgress (float progress);
		float GetProgress () const;

		virtual void Stop ();

	protected:
		virtual bool Update (double applicationTime);
		virtual void _Update (double applicationTime);

		float mSpeed;
		float mProgress;
	};

#include "PX2UIProgressBarCtrl.inl"

	PX2_REGISTER_STREAM(UIProgressBarCtrl);
	typedef Pointer0<UIProgressBarCtrl> UIProgressBarCtrlPtr;

}

#endif