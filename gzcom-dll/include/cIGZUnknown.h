#pragma once
#include <stdint.h>

// This class is derived from Paul Pedriana's released code and should be perfect.
class cIGZUnknown
{
	public:
		virtual bool QueryInterface(uint32_t riid, void** ppvObj) = 0;
		virtual uint32_t AddRef(void) = 0;
		virtual uint32_t Release(void) = 0;
};