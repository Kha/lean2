/*
Copyright (c) 2015 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.

Author: Leonardo de Moura
*/
#pragma once

namespace lean {
environment save_local_ref_info(environment const & env, name const & n, expr const & ref);
optional<expr> get_local_ref_info(environment const & env, name const & n);
void initialize_local_ref_info();
void finalize_local_ref_info();
}
