/*****************************************************************************

 The following code is derived, directly or indirectly, from the SystemC
 source code Copyright (c) 1996-2014 by all Contributors.
 All Rights reserved.

 The contents of this file are subject to the restrictions and limitations
 set forth in the SystemC Open Source License (the "License");
 You may not use this file except in compliance with such restrictions and
 limitations. You may obtain instructions on how to receive a copy of the
 License at http://www.accellera.org/. Software distributed by Contributors
 under the License is distributed on an "AS IS" basis, WITHOUT WARRANTY OF
 ANY KIND, either express or implied. See the License for the specific
 language governing rights and limitations under the License.

 *****************************************************************************/

/*****************************************************************************
 
 display.cpp --
 
 Original Author: Rocco Jonack, Synopsys, Inc.

 *****************************************************************************/

/*****************************************************************************
 
 MODIFICATION LOG - modifiers, enter your name, affiliation, date and
 changes you are making here.
 
 Name, Affiliation, Date:
 Description of Modification:
 
 *****************************************************************************/
#include "../Config.h"

#if (SYSTEM_C_FIR_FILTER > 0)

#include <systemc.h>
#include "display.h"

void display::entry() {

	//  Reading Data when valid if high
	tmp1 = result.read();
	cout << "Display : " << tmp1 << " "
	/* << " at time " << sc_time_stamp() << endl; */
	<< " at time " << sc_time_stamp().to_double() << endl;
	i++;
	if (i == 24) {
		cout << "Simulation of " << i << " items finished"
		/* << " at time " << sc_time_stamp() << endl; */
		<< " at time " << sc_time_stamp().to_double() << endl;
		sc_stop();
	};
}
// EOF
#endif
