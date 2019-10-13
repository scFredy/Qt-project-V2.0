#pragma once

template<class Query>
void FillDb(Query& query)
{
    for(int i(0); i < 100; ++i)
        query.exec("INSERT INTO test VALUES('test')");
}
