.class public Lnet/grandcentrix/tray/provider/SqliteHelper;
.super Ljava/lang/Object;
.source "SqliteHelper.java"


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 37
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static extendSelection(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;
    .locals 2
    .param p0, "selection"    # Ljava/lang/String;
        .annotation build Landroid/support/annotation/Nullable;
        .end annotation
    .end param
    .param p1, "selectionToAdd"    # Ljava/lang/String;
        .annotation build Landroid/support/annotation/Nullable;
        .end annotation
    .end param

    .line 50
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    .line 51
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 52
    return-object p0

    .line 55
    :cond_0
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    .line 56
    .local v0, "selectionToAddBuilder":Ljava/lang/StringBuilder;
    nop

    .line 57
    const-string v1, "("

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 58
    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 59
    const-string v1, ") AND ("

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 60
    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 61
    const-string v1, ")"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 62
    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    .line 63
    .end local v0    # "selectionToAddBuilder":Ljava/lang/StringBuilder;
    goto :goto_0

    .line 64
    :cond_1
    move-object p0, p1

    .line 66
    :goto_0
    return-object p0
.end method

.method public static extendSelectionArgs(Ljava/lang/String;[Ljava/lang/String;)[Ljava/lang/String;
    .locals 2
    .param p0, "selectionArg"    # Ljava/lang/String;
        .annotation build Landroid/support/annotation/Nullable;
        .end annotation
    .end param
    .param p1, "newSelectionArgs"    # [Ljava/lang/String;
        .annotation build Landroid/support/annotation/Nullable;
        .end annotation
    .end param

    .line 118
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 119
    return-object p1

    .line 121
    :cond_0
    const/4 v0, 0x1

    new-array v0, v0, [Ljava/lang/String;

    const/4 v1, 0x0

    aput-object p0, v0, v1

    invoke-static {v0, p1}, Lnet/grandcentrix/tray/provider/SqliteHelper;->extendSelectionArgs([Ljava/lang/String;[Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public static extendSelectionArgs([Ljava/lang/String;Ljava/util/List;)[Ljava/lang/String;
    .locals 2
    .param p0, "selectionArgs"    # [Ljava/lang/String;
        .annotation build Landroid/support/annotation/Nullable;
        .end annotation
    .end param
    .param p1    # Ljava/util/List;
        .annotation build Landroid/support/annotation/Nullable;
        .end annotation
    .end param
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "([",
            "Ljava/lang/String;",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;)[",
            "Ljava/lang/String;"
        }
    .end annotation

    .line 96
    .local p1, "newSelectionArgs":Ljava/util/List;, "Ljava/util/List<Ljava/lang/String;>;"
    if-nez p1, :cond_0

    .line 97
    return-object p0

    .line 99
    :cond_0
    if-eqz p0, :cond_1

    .line 100
    new-instance v0, Ljava/util/ArrayList;

    invoke-static {p0}, Ljava/util/Arrays;->asList([Ljava/lang/Object;)Ljava/util/List;

    move-result-object v1

    invoke-direct {v0, v1}, Ljava/util/ArrayList;-><init>(Ljava/util/Collection;)V

    .line 101
    .local v0, "selectionArgList":Ljava/util/List;, "Ljava/util/List<Ljava/lang/String;>;"
    invoke-interface {v0, p1}, Ljava/util/List;->addAll(Ljava/util/Collection;)Z

    .line 102
    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v1

    new-array v1, v1, [Ljava/lang/String;

    invoke-interface {v0, v1}, Ljava/util/List;->toArray([Ljava/lang/Object;)[Ljava/lang/Object;

    move-result-object v1

    move-object p0, v1

    check-cast p0, [Ljava/lang/String;

    .line 103
    .end local v0    # "selectionArgList":Ljava/util/List;, "Ljava/util/List<Ljava/lang/String;>;"
    goto :goto_0

    .line 104
    :cond_1
    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result v0

    new-array v0, v0, [Ljava/lang/String;

    invoke-interface {p1, v0}, Ljava/util/List;->toArray([Ljava/lang/Object;)[Ljava/lang/Object;

    move-result-object v0

    move-object p0, v0

    check-cast p0, [Ljava/lang/String;

    .line 106
    :goto_0
    return-object p0
.end method

.method public static extendSelectionArgs([Ljava/lang/String;[Ljava/lang/String;)[Ljava/lang/String;
    .locals 1
    .param p0, "selectionArgs"    # [Ljava/lang/String;
        .annotation build Landroid/support/annotation/Nullable;
        .end annotation
    .end param
    .param p1, "newSelectionArgs"    # [Ljava/lang/String;
        .annotation build Landroid/support/annotation/Nullable;
        .end annotation
    .end param

    .line 78
    if-nez p1, :cond_0

    .line 79
    return-object p0

    .line 81
    :cond_0
    invoke-static {p1}, Ljava/util/Arrays;->asList([Ljava/lang/Object;)Ljava/util/List;

    move-result-object v0

    invoke-static {p0, v0}, Lnet/grandcentrix/tray/provider/SqliteHelper;->extendSelectionArgs([Ljava/lang/String;Ljava/util/List;)[Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public static insertOrUpdate(Landroid/database/sqlite/SQLiteDatabase;Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Landroid/content/ContentValues;[Ljava/lang/String;)I
    .locals 8
    .param p0, "sqlDb"    # Landroid/database/sqlite/SQLiteDatabase;
        .annotation build Landroid/support/annotation/Nullable;
        .end annotation
    .end param
    .param p1, "table"    # Ljava/lang/String;
    .param p2, "selection"    # Ljava/lang/String;
        .annotation build Landroid/support/annotation/Nullable;
        .end annotation
    .end param
    .param p3, "selectionArgs"    # [Ljava/lang/String;
    .param p4, "values"    # Landroid/content/ContentValues;
        .annotation build Landroid/support/annotation/NonNull;
        .end annotation
    .end param
    .param p5, "excludeFieldsForUpdate"    # [Ljava/lang/String;
        .annotation build Landroid/support/annotation/Nullable;
        .end annotation
    .end param

    .line 140
    const/4 v0, -0x1

    if-nez p0, :cond_0

    .line 141
    return v0

    .line 144
    :cond_0
    invoke-static {p0, p1, p2, p3}, Landroid/database/DatabaseUtils;->queryNumEntries(Landroid/database/sqlite/SQLiteDatabase;Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;)J

    move-result-wide v1

    .line 146
    .local v1, "items":J
    const-wide/16 v3, 0x0

    cmp-long v5, v1, v3

    if-nez v5, :cond_2

    .line 148
    const/4 v3, 0x0

    invoke-virtual {p0, p1, v3, p4}, Landroid/database/sqlite/SQLiteDatabase;->insert(Ljava/lang/String;Ljava/lang/String;Landroid/content/ContentValues;)J

    move-result-wide v3

    .line 149
    .local v3, "row":J
    const-wide/16 v5, -0x1

    cmp-long v7, v3, v5

    if-nez v7, :cond_1

    .line 151
    return v0

    .line 154
    :cond_1
    const/4 v0, 0x1

    return v0

    .line 158
    .end local v3    # "row":J
    :cond_2
    const/4 v0, 0x0

    if-eqz p5, :cond_3

    .line 159
    array-length v3, p5

    const/4 v4, 0x0

    :goto_0
    if-ge v4, v3, :cond_3

    aget-object v5, p5, v4

    .line 160
    .local v5, "excludeField":Ljava/lang/String;
    invoke-virtual {p4, v5}, Landroid/content/ContentValues;->remove(Ljava/lang/String;)V

    .line 159
    .end local v5    # "excludeField":Ljava/lang/String;
    add-int/lit8 v4, v4, 0x1

    goto :goto_0

    .line 164
    :cond_3
    invoke-virtual {p0, p1, p4, p2, p3}, Landroid/database/sqlite/SQLiteDatabase;->update(Ljava/lang/String;Landroid/content/ContentValues;Ljava/lang/String;[Ljava/lang/String;)I

    .line 169
    return v0
.end method
