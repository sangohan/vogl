/**************************************************************************
 *
 * Copyright 2013-2014 RAD Game Tools and Valve Software
 * All Rights Reserved.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 *
 **************************************************************************/

#ifndef VOGLEDITOR_APICALLTIMELINEMODEL_H
#define VOGLEDITOR_APICALLTIMELINEMODEL_H

#include "vogleditor_timelinemodel.h"
#include "vogleditor_qapicalltreemodel.h"

class vogleditor_apiCallTimelineModel : public vogleditor_timelineModel
{
public:
   explicit vogleditor_apiCallTimelineModel(vogleditor_apiCallTreeItem* pRootApiCall);
   void refresh();

signals:

public slots:

private:
   void AddApiCallsToTimeline(vogleditor_apiCallTreeItem* pRoot, vogleditor_timelineItem* pDestRoot);
   float u64ToFloat(uint64_t value);

   vogleditor_apiCallTreeItem* m_pRootApiCall;
   uint64_t m_rawBaseTime;
};

#endif // VOGLEDITOR_APICALLTIMELINEMODEL_H