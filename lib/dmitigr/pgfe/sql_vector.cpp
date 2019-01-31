// -*- C++ -*-
// Copyright (C) Dmitry Igrishin
// For conditions of distribution and use, see files LICENSE.txt or pgfe.hpp

#include "dmitigr/pgfe/sql_vector.hxx"

namespace pgfe = dmitigr::pgfe;

namespace dmitigr::pgfe {

DMITIGR_PGFE_API std::unique_ptr<Sql_vector> Sql_vector::make()
{
  return std::make_unique<detail::iSql_vector>();
}

DMITIGR_PGFE_API std::unique_ptr<Sql_vector> Sql_vector::make(const std::string& input)
{
  return std::make_unique<detail::iSql_vector>(input);
}

DMITIGR_PGFE_API std::unique_ptr<Sql_vector> Sql_vector::make(std::vector<std::unique_ptr<Sql_string>>&& v)
{
  return std::make_unique<detail::iSql_vector>(std::move(v));
}

} // namespace dmitigr::pgfe
