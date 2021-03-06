/*
*
* �ļ�����	��	PX2MultiTouch.inl
*
*/

//----------------------------------------------------------------------------
// MultiTouchState
//----------------------------------------------------------------------------
inline bool MultiTouchState::HasTouchType (MultiTouchEventType touch) const
{
	return ((TouchTypes & (1 << touch )) == 0) ? false : true;
}
//----------------------------------------------------------------------------

//----------------------------------------------------------------------------
// MultiTouch
//----------------------------------------------------------------------------
inline MultiTouchListener *MultiTouch::GetEventCallback ()
{
	return mListener;
}
//----------------------------------------------------------------------------