.class public Lnet/grandcentrix/tray/provider/TrayProviderHelper;
.super Ljava/lang/Object;
.source "TrayProviderHelper.java"


# instance fields
.field private final mContext:Landroid/content/Context;

.field private final mTrayUri:Lnet/grandcentrix/tray/provider/TrayUri;


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 1
    .param p1, "context"    # Landroid/content/Context;
        .annotation build Landroid/support/annotation/NonNull;
        .end annotation
    .end param

    .line 46
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 47
    iput-object p1, p0, Lnet/grandcentrix/tray/provider/TrayProviderHelper;->mContext:Landroid/content/Context;

    .line 48
    new-instance v0, Lnet/grandcentrix/tray/provider/TrayUri;

    invoke-direct {v0, p1}, Lnet/grandcentrix/tray/provider/TrayUri;-><init>(Landroid/content/Context;)V

    iput-object v0, p0, Lnet/grandcentrix/tray/provider/TrayProviderHelper;->mTrayUri:Lnet/grandcentrix/tray/provider/TrayUri;

    .line 49
    return-void
.end method

.method static cursorToTrayItem(Landroid/database/Cursor;)Lnet/grandcentrix/tray/core/TrayItem;
    .locals 12
    .param p0, "cursor"    # Landroid/database/Cursor;
    .annotation build Landroid/support/annotation/NonNull;
    .end annotation

    .line 264
    nop

    .line 265
    const-string v0, "MODULE"

    invoke-interface {p0, v0}, Landroid/database/Cursor;->getColumnIndexOrThrow(Ljava/lang/String;)I

    move-result v0

    .line 264
    invoke-interface {p0, v0}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object v0

    .line 266
    .local v0, "module":Ljava/lang/String;
    nop

    .line 267
    const-string v1, "KEY"

    invoke-interface {p0, v1}, Landroid/database/Cursor;->getColumnIndexOrThrow(Ljava/lang/String;)I

    move-result v1

    .line 266
    invoke-interface {p0, v1}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object v8

    .line 268
    .local v8, "key":Ljava/lang/String;
    nop

    .line 269
    const-string v1, "MIGRATED_KEY"

    invoke-interface {p0, v1}, Landroid/database/Cursor;->getColumnIndexOrThrow(Ljava/lang/String;)I

    move-result v1

    .line 268
    invoke-interface {p0, v1}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object v9

    .line 270
    .local v9, "migratedKey":Ljava/lang/String;
    nop

    .line 271
    const-string v1, "VALUE"

    invoke-interface {p0, v1}, Landroid/database/Cursor;->getColumnIndexOrThrow(Ljava/lang/String;)I

    move-result v1

    .line 270
    invoke-interface {p0, v1}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object v10

    .line 272
    .local v10, "value":Ljava/lang/String;
    new-instance v6, Ljava/util/Date;

    .line 273
    const-string v1, "CREATED"

    invoke-interface {p0, v1}, Landroid/database/Cursor;->getColumnIndexOrThrow(Ljava/lang/String;)I

    move-result v1

    .line 272
    invoke-interface {p0, v1}, Landroid/database/Cursor;->getLong(I)J

    move-result-wide v1

    invoke-direct {v6, v1, v2}, Ljava/util/Date;-><init>(J)V

    .line 274
    .local v6, "created":Ljava/util/Date;
    new-instance v7, Ljava/util/Date;

    .line 275
    const-string v1, "UPDATED"

    invoke-interface {p0, v1}, Landroid/database/Cursor;->getColumnIndexOrThrow(Ljava/lang/String;)I

    move-result v1

    .line 274
    invoke-interface {p0, v1}, Landroid/database/Cursor;->getLong(I)J

    move-result-wide v1

    invoke-direct {v7, v1, v2}, Ljava/util/Date;-><init>(J)V

    .line 276
    .local v7, "updated":Ljava/util/Date;
    new-instance v11, Lnet/grandcentrix/tray/core/TrayItem;

    move-object v1, v11

    move-object v2, v0

    move-object v3, v8

    move-object v4, v9

    move-object v5, v10

    invoke-direct/range {v1 .. v7}, Lnet/grandcentrix/tray/core/TrayItem;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/util/Date;Ljava/util/Date;)V

    return-object v11
.end method


# virtual methods
.method public clear()Z
    .locals 3

    .line 59
    :try_start_0
    iget-object v0, p0, Lnet/grandcentrix/tray/provider/TrayProviderHelper;->mContext:Landroid/content/Context;

    invoke-virtual {v0}, Landroid/content/Context;->getContentResolver()Landroid/content/ContentResolver;

    move-result-object v0

    iget-object v1, p0, Lnet/grandcentrix/tray/provider/TrayProviderHelper;->mTrayUri:Lnet/grandcentrix/tray/provider/TrayUri;

    invoke-virtual {v1}, Lnet/grandcentrix/tray/provider/TrayUri;->get()Landroid/net/Uri;

    move-result-object v1

    const/4 v2, 0x0

    invoke-virtual {v0, v1, v2, v2}, Landroid/content/ContentResolver;->delete(Landroid/net/Uri;Ljava/lang/String;[Ljava/lang/String;)I
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 60
    const/4 v0, 0x1

    return v0

    .line 61
    :catchall_0
    move-exception v0

    .line 62
    .local v0, "e":Ljava/lang/Throwable;
    invoke-virtual {v0}, Ljava/lang/Throwable;->printStackTrace()V

    .line 63
    const/4 v1, 0x0

    return v1
.end method

.method public varargs clearBut([Lnet/grandcentrix/tray/core/AbstractTrayPreference;)Z
    .locals 9
    .param p1, "modules"    # [Lnet/grandcentrix/tray/core/AbstractTrayPreference;

    .line 75
    const/4 v0, 0x0

    .line 76
    .local v0, "selection":Ljava/lang/String;
    const/4 v1, 0x0

    new-array v2, v1, [Ljava/lang/String;

    .line 78
    .local v2, "selectionArgs":[Ljava/lang/String;
    array-length v3, p1

    move-object v4, v2

    move-object v2, v0

    const/4 v0, 0x0

    .end local v0    # "selection":Ljava/lang/String;
    .local v2, "selection":Ljava/lang/String;
    .local v4, "selectionArgs":[Ljava/lang/String;
    :goto_0
    const/4 v5, 0x1

    if-ge v0, v3, :cond_1

    aget-object v6, p1, v0

    .line 79
    .local v6, "module":Lnet/grandcentrix/tray/core/AbstractTrayPreference;
    if-nez v6, :cond_0

    .line 80
    goto :goto_1

    .line 82
    :cond_0
    invoke-virtual {v6}, Lnet/grandcentrix/tray/core/AbstractTrayPreference;->getName()Ljava/lang/String;

    move-result-object v7

    .line 83
    .local v7, "moduleName":Ljava/lang/String;
    nop

    .line 84
    const-string v8, "MODULE != ?"

    invoke-static {v2, v8}, Lnet/grandcentrix/tray/provider/SqliteHelper;->extendSelection(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    .line 85
    new-array v5, v5, [Ljava/lang/String;

    aput-object v7, v5, v1

    .line 86
    invoke-static {v4, v5}, Lnet/grandcentrix/tray/provider/SqliteHelper;->extendSelectionArgs([Ljava/lang/String;[Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v4

    .line 78
    .end local v6    # "module":Lnet/grandcentrix/tray/core/AbstractTrayPreference;
    .end local v7    # "moduleName":Ljava/lang/String;
    :goto_1
    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    .line 91
    :cond_1
    :try_start_0
    iget-object v0, p0, Lnet/grandcentrix/tray/provider/TrayProviderHelper;->mContext:Landroid/content/Context;

    invoke-virtual {v0}, Landroid/content/Context;->getContentResolver()Landroid/content/ContentResolver;

    move-result-object v0

    iget-object v3, p0, Lnet/grandcentrix/tray/provider/TrayProviderHelper;->mTrayUri:Lnet/grandcentrix/tray/provider/TrayUri;

    invoke-virtual {v3}, Lnet/grandcentrix/tray/provider/TrayUri;->get()Landroid/net/Uri;

    move-result-object v3

    invoke-virtual {v0, v3, v2, v4}, Landroid/content/ContentResolver;->delete(Landroid/net/Uri;Ljava/lang/String;[Ljava/lang/String;)I
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 92
    return v5

    .line 93
    :catchall_0
    move-exception v0

    .line 94
    .local v0, "e":Ljava/lang/Throwable;
    invoke-virtual {v0}, Ljava/lang/Throwable;->printStackTrace()V

    .line 95
    return v1
.end method

.method public getAll()Ljava/util/List;
    .locals 1
    .annotation build Landroid/support/annotation/NonNull;
    .end annotation

    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/List<",
            "Lnet/grandcentrix/tray/core/TrayItem;",
            ">;"
        }
    .end annotation

    .line 106
    iget-object v0, p0, Lnet/grandcentrix/tray/provider/TrayProviderHelper;->mTrayUri:Lnet/grandcentrix/tray/provider/TrayUri;

    invoke-virtual {v0}, Lnet/grandcentrix/tray/provider/TrayUri;->get()Landroid/net/Uri;

    move-result-object v0

    invoke-virtual {p0, v0}, Lnet/grandcentrix/tray/provider/TrayProviderHelper;->queryProviderSafe(Landroid/net/Uri;)Ljava/util/List;

    move-result-object v0

    return-object v0
.end method

.method public persist(Landroid/net/Uri;Ljava/lang/String;)Z
    .locals 1
    .param p1, "uri"    # Landroid/net/Uri;
        .annotation build Landroid/support/annotation/NonNull;
        .end annotation
    .end param
    .param p2, "value"    # Ljava/lang/String;
        .annotation build Landroid/support/annotation/Nullable;
        .end annotation
    .end param

    .line 142
    const/4 v0, 0x0

    invoke-virtual {p0, p1, p2, v0}, Lnet/grandcentrix/tray/provider/TrayProviderHelper;->persist(Landroid/net/Uri;Ljava/lang/String;Ljava/lang/String;)Z

    move-result v0

    return v0
.end method

.method public persist(Landroid/net/Uri;Ljava/lang/String;Ljava/lang/String;)Z
    .locals 3
    .param p1, "uri"    # Landroid/net/Uri;
        .annotation build Landroid/support/annotation/NonNull;
        .end annotation
    .end param
    .param p2, "value"    # Ljava/lang/String;
        .annotation build Landroid/support/annotation/Nullable;
        .end annotation
    .end param
    .param p3, "previousKey"    # Ljava/lang/String;
        .annotation build Landroid/support/annotation/Nullable;
        .end annotation
    .end param

    .line 147
    new-instance v0, Landroid/content/ContentValues;

    invoke-direct {v0}, Landroid/content/ContentValues;-><init>()V

    .line 148
    .local v0, "values":Landroid/content/ContentValues;
    const-string v1, "VALUE"

    invoke-virtual {v0, v1, p2}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/String;)V

    .line 149
    const-string v1, "MIGRATED_KEY"

    invoke-virtual {v0, v1, p3}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/String;)V

    .line 151
    const/4 v1, 0x0

    :try_start_0
    iget-object v2, p0, Lnet/grandcentrix/tray/provider/TrayProviderHelper;->mContext:Landroid/content/Context;

    invoke-virtual {v2}, Landroid/content/Context;->getContentResolver()Landroid/content/ContentResolver;

    move-result-object v2

    invoke-virtual {v2, p1, v0}, Landroid/content/ContentResolver;->insert(Landroid/net/Uri;Landroid/content/ContentValues;)Landroid/net/Uri;

    move-result-object v2
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-eqz v2, :cond_0

    const/4 v1, 0x1

    :cond_0
    return v1

    .line 152
    :catchall_0
    move-exception v2

    .line 153
    .local v2, "e":Ljava/lang/Throwable;
    invoke-virtual {v2}, Ljava/lang/Throwable;->printStackTrace()V

    .line 154
    return v1
.end method

.method public persist(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Z
    .locals 1
    .param p1, "module"    # Ljava/lang/String;
        .annotation build Landroid/support/annotation/NonNull;
        .end annotation
    .end param
    .param p2, "key"    # Ljava/lang/String;
        .annotation build Landroid/support/annotation/NonNull;
        .end annotation
    .end param
    .param p3, "value"    # Ljava/lang/String;
        .annotation build Landroid/support/annotation/NonNull;
        .end annotation
    .end param

    .line 120
    const/4 v0, 0x0

    invoke-virtual {p0, p1, p2, v0, p3}, Lnet/grandcentrix/tray/provider/TrayProviderHelper;->persist(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Z

    move-result v0

    return v0
.end method

.method public persist(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Z
    .locals 2
    .param p1, "module"    # Ljava/lang/String;
        .annotation build Landroid/support/annotation/NonNull;
        .end annotation
    .end param
    .param p2, "key"    # Ljava/lang/String;
        .annotation build Landroid/support/annotation/NonNull;
        .end annotation
    .end param
    .param p3, "previousKey"    # Ljava/lang/String;
        .annotation build Landroid/support/annotation/Nullable;
        .end annotation
    .end param
    .param p4, "value"    # Ljava/lang/String;
        .annotation build Landroid/support/annotation/Nullable;
        .end annotation
    .end param

    .line 134
    iget-object v0, p0, Lnet/grandcentrix/tray/provider/TrayProviderHelper;->mTrayUri:Lnet/grandcentrix/tray/provider/TrayUri;

    invoke-virtual {v0}, Lnet/grandcentrix/tray/provider/TrayUri;->builder()Lnet/grandcentrix/tray/provider/TrayUri$a;

    move-result-object v0

    .line 135
    invoke-virtual {v0, p1}, Lnet/grandcentrix/tray/provider/TrayUri$a;->b(Ljava/lang/String;)Lnet/grandcentrix/tray/provider/TrayUri$a;

    .line 136
    invoke-virtual {v0, p2}, Lnet/grandcentrix/tray/provider/TrayUri$a;->a(Ljava/lang/String;)Lnet/grandcentrix/tray/provider/TrayUri$a;

    .line 137
    invoke-virtual {v0}, Lnet/grandcentrix/tray/provider/TrayUri$a;->a()Landroid/net/Uri;

    move-result-object v0

    .line 138
    .local v0, "uri":Landroid/net/Uri;
    invoke-virtual {p0, v0, p4, p3}, Lnet/grandcentrix/tray/provider/TrayProviderHelper;->persist(Landroid/net/Uri;Ljava/lang/String;Ljava/lang/String;)Z

    move-result v1

    return v1
.end method

.method public queryProvider(Landroid/net/Uri;)Ljava/util/List;
    .locals 7
    .param p1, "uri"    # Landroid/net/Uri;
        .annotation build Landroid/support/annotation/NonNull;
        .end annotation
    .end param
    .annotation build Landroid/support/annotation/NonNull;
    .end annotation

    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/net/Uri;",
            ")",
            "Ljava/util/List<",
            "Lnet/grandcentrix/tray/core/TrayItem;",
            ">;"
        }
    .end annotation

    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lnet/grandcentrix/tray/core/TrayException;
        }
    .end annotation

    .line 169
    :try_start_0
    iget-object v0, p0, Lnet/grandcentrix/tray/provider/TrayProviderHelper;->mContext:Landroid/content/Context;

    invoke-virtual {v0}, Landroid/content/Context;->getContentResolver()Landroid/content/ContentResolver;

    move-result-object v1

    const/4 v3, 0x0

    const/4 v4, 0x0

    const/4 v5, 0x0

    const/4 v6, 0x0

    move-object v2, p1

    invoke-virtual/range {v1 .. v6}, Landroid/content/ContentResolver;->query(Landroid/net/Uri;[Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;)Landroid/database/Cursor;

    move-result-object v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 172
    .local v0, "cursor":Landroid/database/Cursor;
    nop

    .line 175
    if-eqz v0, :cond_1

    .line 180
    new-instance v1, Ljava/util/ArrayList;

    invoke-direct {v1}, Ljava/util/ArrayList;-><init>()V

    .line 181
    .local v1, "list":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Lnet/grandcentrix/tray/core/TrayItem;>;"
    invoke-interface {v0}, Landroid/database/Cursor;->moveToFirst()Z

    move-result v2

    .local v2, "hasItem":Z
    :goto_0
    if-eqz v2, :cond_0

    .line 182
    invoke-static {v0}, Lnet/grandcentrix/tray/provider/TrayProviderHelper;->cursorToTrayItem(Landroid/database/Cursor;)Lnet/grandcentrix/tray/core/TrayItem;

    move-result-object v3

    .line 183
    .local v3, "trayItem":Lnet/grandcentrix/tray/core/TrayItem;
    invoke-virtual {v1, v3}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 181
    .end local v3    # "trayItem":Lnet/grandcentrix/tray/core/TrayItem;
    invoke-interface {v0}, Landroid/database/Cursor;->moveToNext()Z

    move-result v2

    goto :goto_0

    .line 185
    .end local v2    # "hasItem":Z
    :cond_0
    invoke-interface {v0}, Landroid/database/Cursor;->close()V

    .line 186
    return-object v1

    .line 177
    .end local v1    # "list":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Lnet/grandcentrix/tray/core/TrayItem;>;"
    :cond_1
    new-instance v1, Lnet/grandcentrix/tray/core/TrayException;

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "could not access stored data with uri "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-direct {v1, v2}, Lnet/grandcentrix/tray/core/TrayException;-><init>(Ljava/lang/String;)V

    throw v1

    .line 170
    .end local v0    # "cursor":Landroid/database/Cursor;
    :catchall_0
    move-exception v0

    .line 171
    .local v0, "e":Ljava/lang/Throwable;
    new-instance v1, Lnet/grandcentrix/tray/core/TrayException;

    const-string v2, "Hard error accessing the ContentProvider"

    invoke-direct {v1, v2, v0}, Lnet/grandcentrix/tray/core/TrayException;-><init>(Ljava/lang/String;Ljava/lang/Throwable;)V

    throw v1
.end method

.method public queryProviderSafe(Landroid/net/Uri;)Ljava/util/List;
    .locals 2
    .param p1, "uri"    # Landroid/net/Uri;
        .annotation build Landroid/support/annotation/NonNull;
        .end annotation
    .end param
    .annotation build Landroid/support/annotation/NonNull;
    .end annotation

    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/net/Uri;",
            ")",
            "Ljava/util/List<",
            "Lnet/grandcentrix/tray/core/TrayItem;",
            ">;"
        }
    .end annotation

    .line 199
    :try_start_0
    invoke-virtual {p0, p1}, Lnet/grandcentrix/tray/provider/TrayProviderHelper;->queryProvider(Landroid/net/Uri;)Ljava/util/List;

    move-result-object v0
    :try_end_0
    .catch Lnet/grandcentrix/tray/core/TrayException; {:try_start_0 .. :try_end_0} :catch_0

    return-object v0

    .line 200
    :catch_0
    move-exception v0

    .line 201
    .local v0, "e":Lnet/grandcentrix/tray/core/TrayException;
    new-instance v1, Ljava/util/ArrayList;

    invoke-direct {v1}, Ljava/util/ArrayList;-><init>()V

    return-object v1
.end method

.method public remove(Landroid/net/Uri;)Z
    .locals 2
    .param p1, "uri"    # Landroid/net/Uri;

    .line 213
    :try_start_0
    iget-object v0, p0, Lnet/grandcentrix/tray/provider/TrayProviderHelper;->mContext:Landroid/content/Context;

    invoke-virtual {v0}, Landroid/content/Context;->getContentResolver()Landroid/content/ContentResolver;

    move-result-object v0

    const/4 v1, 0x0

    invoke-virtual {v0, p1, v1, v1}, Landroid/content/ContentResolver;->delete(Landroid/net/Uri;Ljava/lang/String;[Ljava/lang/String;)I
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 214
    const/4 v0, 0x1

    return v0

    .line 215
    :catchall_0
    move-exception v0

    .line 216
    .local v0, "e":Ljava/lang/Throwable;
    invoke-virtual {v0}, Ljava/lang/Throwable;->printStackTrace()V

    .line 217
    const/4 v1, 0x0

    return v1
.end method

.method public removeAndCount(Landroid/net/Uri;)I
    .locals 2
    .param p1, "uri"    # Landroid/net/Uri;

    .line 229
    :try_start_0
    iget-object v0, p0, Lnet/grandcentrix/tray/provider/TrayProviderHelper;->mContext:Landroid/content/Context;

    invoke-virtual {v0}, Landroid/content/Context;->getContentResolver()Landroid/content/ContentResolver;

    move-result-object v0

    const/4 v1, 0x0

    invoke-virtual {v0, p1, v1, v1}, Landroid/content/ContentResolver;->delete(Landroid/net/Uri;Ljava/lang/String;[Ljava/lang/String;)I

    move-result v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return v0

    .line 230
    :catchall_0
    move-exception v0

    .line 231
    .local v0, "e":Ljava/lang/Throwable;
    invoke-virtual {v0}, Ljava/lang/Throwable;->printStackTrace()V

    .line 232
    const/4 v1, 0x0

    return v1
.end method

.method public wipe()Z
    .locals 4

    .line 242
    invoke-virtual {p0}, Lnet/grandcentrix/tray/provider/TrayProviderHelper;->clear()Z

    move-result v0

    const/4 v1, 0x0

    if-nez v0, :cond_0

    .line 243
    return v1

    .line 246
    :cond_0
    :try_start_0
    iget-object v0, p0, Lnet/grandcentrix/tray/provider/TrayProviderHelper;->mContext:Landroid/content/Context;

    invoke-virtual {v0}, Landroid/content/Context;->getContentResolver()Landroid/content/ContentResolver;

    move-result-object v0

    iget-object v2, p0, Lnet/grandcentrix/tray/provider/TrayProviderHelper;->mTrayUri:Lnet/grandcentrix/tray/provider/TrayUri;

    invoke-virtual {v2}, Lnet/grandcentrix/tray/provider/TrayUri;->getInternal()Landroid/net/Uri;

    move-result-object v2

    const/4 v3, 0x0

    invoke-virtual {v0, v2, v3, v3}, Landroid/content/ContentResolver;->delete(Landroid/net/Uri;Ljava/lang/String;[Ljava/lang/String;)I

    move-result v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-lez v0, :cond_1

    const/4 v1, 0x1

    :cond_1
    return v1

    .line 247
    :catchall_0
    move-exception v0

    .line 248
    .local v0, "e":Ljava/lang/Throwable;
    invoke-virtual {v0}, Ljava/lang/Throwable;->printStackTrace()V

    .line 249
    return v1
.end method
