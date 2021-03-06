// ------------------------------------------------------------
// Copyright (c) Microsoft Corporation.  All rights reserved.
// Licensed under the MIT License (MIT). See License.txt in the repo root for license information.
// ------------------------------------------------------------

#pragma once 

namespace TxnReplicator
{ 
    class SLConfigBase
    {
    public:
        virtual void GetTransactionalReplicatorSharedLogSettingsStructValues(SLConfigValues & configValues) const = 0;
    };
}
