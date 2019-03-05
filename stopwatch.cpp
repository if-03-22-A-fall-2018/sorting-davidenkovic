/*-----------------------------------------------------------------------------
 *				HTBLA-Leonding / Class: <your class name here>
 *-----------------------------------------------------------------------------
 * Exercise Number: #exercise_number#
 * File:			stopwatch.cpp
 * Author(s):		Peter Bauer
 * Due Date:		#due#
 *-----------------------------------------------------------------------------
 * Description:
 * <your description here>
 *-----------------------------------------------------------------------------
*/

#include "stopwatch.h"
#include <time.h>

static clock_t endTime;
static clock_t startTime;

void start_stopwatch(){
  startTime = clock();
}
void stop_stopwatch(){
}
float elapsed_time(){
  endTime = clock();
  return (float)(endTime-startTime)/CLOCKS_PER_SEC;
}
