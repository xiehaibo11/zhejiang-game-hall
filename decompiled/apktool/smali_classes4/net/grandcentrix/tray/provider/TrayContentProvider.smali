.class public Lnet/grandcentrix/tray/provider/TrayContentProvider;
.super Landroid/content/ContentProvider;
.source "TrayContentProvider.java"


# static fields
.field private static final ALL_PREFERENCE:I = 0x1e

.field private static final INTERNAL_ALL_PREFERENCE:I = 0x82

.field private static final INTERNAL_MODULE_PREFERENCE:I = 0x78

.field private static final INTERNAL_SINGLE_PREFERENCE:I = 0x6e

.field private static final MODULE_PREFERENCE:I = 0x14

.field private static final SINGLE_PREFERENCE:I = 0xa

.field private static sURIMatcher:Landroid/content/UriMatcher;


# instance fields
.field mDeviceDbHelper:Lnet/grandcentrix/tray/provider/TrayDBHelper;

.field mUserDbHelper:Lnet/grandcentrix/tray/provider/TrayDBHelper;


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 49
    invoke-direct {p0}, Landroid/content/ContentProvider;-><init>()V

    return-void
.end method

.method static setAuthority(Ljava/lang/String;)V
    .locals 3
    .param p0, "authority"    # Ljava/lang/String;

    .line 331
    new-instance v0, Landroid/content/UriMatcher;

    const/4 v1, -0x1

    invoke-direct {v0, v1}, Landroid/content/UriMatcher;-><init>(I)V

    sput-object v0, Lnet/grandcentrix/tray/provider/TrayContentProvider;->sURIMatcher:Landroid/content/UriMatcher;

    .line 333
    sget-object v0, Lnet/grandcentrix/tray/provider/TrayContentProvider;->sURIMatcher:Landroid/content/UriMatcher;

    const-string v1, "preferences"

    const/16 v2, 0x1e

    invoke-virtual {v0, p0, v1, v2}, Landroid/content/UriMatcher;->addURI(Ljava/lang/String;Ljava/lang/String;I)V

    .line 338
    sget-object v0, Lnet/grandcentrix/tray/provider/TrayContentProvider;->sURIMatcher:Landroid/content/UriMatcher;

    const-string v1, "preferences/*"

    const/16 v2, 0x14

    invoke-virtual {v0, p0, v1, v2}, Landroid/content/UriMatcher;->addURI(Ljava/lang/String;Ljava/lang/String;I)V

    .line 343
    sget-object v0, Lnet/grandcentrix/tray/provider/TrayContentProvider;->sURIMatcher:Landroid/content/UriMatcher;

    const-string v1, "preferences/*/*"

    const/16 v2, 0xa

    invoke-virtual {v0, p0, v1, v2}, Landroid/content/UriMatcher;->addURI(Ljava/lang/String;Ljava/lang/String;I)V

    .line 347
    sget-object v0, Lnet/grandcentrix/tray/provider/TrayContentProvider;->sURIMatcher:Landroid/content/UriMatcher;

    const-string v1, "internal_preferences"

    const/16 v2, 0x82

    invoke-virtual {v0, p0, v1, v2}, Landroid/content/UriMatcher;->addURI(Ljava/lang/String;Ljava/lang/String;I)V

    .line 352
    sget-object v0, Lnet/grandcentrix/tray/provider/TrayContentProvider;->sURIMatcher:Landroid/content/UriMatcher;

    const-string v1, "internal_preferences/*"

    const/16 v2, 0x78

    invoke-virtual {v0, p0, v1, v2}, Landroid/content/UriMatcher;->addURI(Ljava/lang/String;Ljava/lang/String;I)V

    .line 357
    sget-object v0, Lnet/grandcentrix/tray/provider/TrayContentProvider;->sURIMatcher:Landroid/content/UriMatcher;

    const-string v1, "internal_preferences/*/*"

    const/16 v2, 0x6e

    invoke-virtual {v0, p0, v1, v2}, Landroid/content/UriMatcher;->addURI(Ljava/lang/String;Ljava/lang/String;I)V

    .line 360
    return-void
.end method


# virtual methods
.method public attachInfo(Landroid/content/Context;Landroid/content/pm/ProviderInfo;)V
    .locals 2
    .param p1, "context"    # Landroid/content/Context;
    .param p2, "info"    # Landroid/content/pm/ProviderInfo;

    .line 221
    invoke-super {p0, p1, p2}, Landroid/content/ContentProvider;->attachInfo(Landroid/content/Context;Landroid/content/pm/ProviderInfo;)V

    .line 222
    iget-object v0, p2, Landroid/content/pm/ProviderInfo;->authority:Ljava/lang/String;

    invoke-static {v0}, Lnet/grandcentrix/tray/provider/TrayContentProvider;->setAuthority(Ljava/lang/String;)V

    .line 223
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "TrayContentProvider registered for authority: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p2, Landroid/content/pm/ProviderInfo;->authority:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lnet/grandcentrix/tray/core/TrayLog;->v(Ljava/lang/String;)V

    .line 224
    return-void
.end method

.method public delete(Landroid/net/Uri;Ljava/lang/String;[Ljava/lang/String;)I
    .locals 6
    .param p1, "uri"    # Landroid/net/Uri;
    .param p2, "selection"    # Ljava/lang/String;
    .param p3, "selectionArgs"    # [Ljava/lang/String;

    .line 72
    sget-object v0, Lnet/grandcentrix/tray/provider/TrayContentProvider;->sURIMatcher:Landroid/content/UriMatcher;

    invoke-virtual {v0, p1}, Landroid/content/UriMatcher;->match(Landroid/net/Uri;)I

    move-result v0

    .line 73
    .local v0, "match":I
    const/16 v1, 0xa

    const/4 v2, 0x0

    const/4 v3, 0x1

    if-eq v0, v1, :cond_1

    const/16 v1, 0x14

    if-eq v0, v1, :cond_2

    const/16 v1, 0x1e

    if-eq v0, v1, :cond_3

    const/16 v1, 0x6e

    if-eq v0, v1, :cond_1

    const/16 v1, 0x78

    if-eq v0, v1, :cond_2

    const/16 v1, 0x82

    if-ne v0, v1, :cond_0

    goto :goto_0

    .line 92
    :cond_0
    new-instance v1, Ljava/lang/IllegalArgumentException;

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "Delete is not supported for Uri: "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-direct {v1, v2}, Ljava/lang/IllegalArgumentException;-><init>(Ljava/lang/String;)V

    throw v1

    .line 76
    :cond_1
    const-string v1, "KEY = ?"

    invoke-static {p2, v1}, Lnet/grandcentrix/tray/provider/SqliteHelper;->extendSelection(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p2

    .line 78
    new-array v1, v3, [Ljava/lang/String;

    .line 79
    invoke-virtual {p1}, Landroid/net/Uri;->getPathSegments()Ljava/util/List;

    move-result-object v4

    const/4 v5, 0x2

    invoke-interface {v4, v5}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Ljava/lang/String;

    aput-object v4, v1, v2

    .line 78
    invoke-static {p3, v1}, Lnet/grandcentrix/tray/provider/SqliteHelper;->extendSelectionArgs([Ljava/lang/String;[Ljava/lang/String;)[Ljava/lang/String;

    move-result-object p3

    .line 83
    :cond_2
    const-string v1, "MODULE = ?"

    invoke-static {p2, v1}, Lnet/grandcentrix/tray/provider/SqliteHelper;->extendSelection(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p2

    .line 85
    new-array v1, v3, [Ljava/lang/String;

    .line 86
    invoke-virtual {p1}, Landroid/net/Uri;->getPathSegments()Ljava/util/List;

    move-result-object v4

    invoke-interface {v4, v3}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/String;

    aput-object v3, v1, v2

    .line 85
    invoke-static {p3, v1}, Lnet/grandcentrix/tray/provider/SqliteHelper;->extendSelectionArgs([Ljava/lang/String;[Ljava/lang/String;)[Ljava/lang/String;

    move-result-object p3

    .line 90
    :cond_3
    :goto_0
    nop

    .line 96
    const-string v1, "backup"

    invoke-virtual {p1, v1}, Landroid/net/Uri;->getQueryParameter(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    .line 97
    .local v1, "backup":Ljava/lang/String;
    if-nez v1, :cond_4

    .line 98
    iget-object v2, p0, Lnet/grandcentrix/tray/provider/TrayContentProvider;->mDeviceDbHelper:Lnet/grandcentrix/tray/provider/TrayDBHelper;

    invoke-virtual {v2}, Landroid/database/sqlite/SQLiteOpenHelper;->getWritableDatabase()Landroid/database/sqlite/SQLiteDatabase;

    move-result-object v2

    .line 99
    invoke-virtual {p0, p1}, Lnet/grandcentrix/tray/provider/TrayContentProvider;->getTable(Landroid/net/Uri;)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3, p2, p3}, Landroid/database/sqlite/SQLiteDatabase;->delete(Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;)I

    move-result v2

    .line 100
    .local v2, "device":I
    iget-object v3, p0, Lnet/grandcentrix/tray/provider/TrayContentProvider;->mUserDbHelper:Lnet/grandcentrix/tray/provider/TrayDBHelper;

    invoke-virtual {v3}, Landroid/database/sqlite/SQLiteOpenHelper;->getWritableDatabase()Landroid/database/sqlite/SQLiteDatabase;

    move-result-object v3

    .line 101
    invoke-virtual {p0, p1}, Lnet/grandcentrix/tray/provider/TrayContentProvider;->getTable(Landroid/net/Uri;)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4, p2, p3}, Landroid/database/sqlite/SQLiteDatabase;->delete(Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;)I

    move-result v3

    .line 102
    .local v3, "user":I
    add-int/2addr v2, v3

    .line 103
    .end local v3    # "user":I
    .local v2, "rows":I
    goto :goto_1

    .line 104
    .end local v2    # "rows":I
    :cond_4
    invoke-virtual {p0, p1}, Lnet/grandcentrix/tray/provider/TrayContentProvider;->getWritableDatabase(Landroid/net/Uri;)Landroid/database/sqlite/SQLiteDatabase;

    move-result-object v2

    .line 105
    invoke-virtual {p0, p1}, Lnet/grandcentrix/tray/provider/TrayContentProvider;->getTable(Landroid/net/Uri;)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3, p2, p3}, Landroid/database/sqlite/SQLiteDatabase;->delete(Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;)I

    move-result v2

    .line 109
    .restart local v2    # "rows":I
    :goto_1
    if-lez v2, :cond_5

    .line 110
    invoke-virtual {p0}, Landroid/content/ContentProvider;->getContext()Landroid/content/Context;

    move-result-object v3

    invoke-virtual {v3}, Landroid/content/Context;->getContentResolver()Landroid/content/ContentResolver;

    move-result-object v3

    const/4 v4, 0x0

    invoke-virtual {v3, p1, v4}, Landroid/content/ContentResolver;->notifyChange(Landroid/net/Uri;Landroid/database/ContentObserver;)V

    .line 113
    :cond_5
    return v2
.end method

.method public getReadableDatabase(Landroid/net/Uri;)Landroid/database/sqlite/SQLiteDatabase;
    .locals 1
    .param p1, "uri"    # Landroid/net/Uri;

    .line 117
    invoke-virtual {p0, p1}, Lnet/grandcentrix/tray/provider/TrayContentProvider;->shouldBackup(Landroid/net/Uri;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 118
    iget-object v0, p0, Lnet/grandcentrix/tray/provider/TrayContentProvider;->mUserDbHelper:Lnet/grandcentrix/tray/provider/TrayDBHelper;

    invoke-virtual {v0}, Landroid/database/sqlite/SQLiteOpenHelper;->getReadableDatabase()Landroid/database/sqlite/SQLiteDatabase;

    move-result-object v0

    return-object v0

    .line 120
    :cond_0
    iget-object v0, p0, Lnet/grandcentrix/tray/provider/TrayContentProvider;->mDeviceDbHelper:Lnet/grandcentrix/tray/provider/TrayDBHelper;

    invoke-virtual {v0}, Landroid/database/sqlite/SQLiteOpenHelper;->getReadableDatabase()Landroid/database/sqlite/SQLiteDatabase;

    move-result-object v0

    return-object v0
.end method

.method public getTable(Landroid/net/Uri;)Ljava/lang/String;
    .locals 2
    .param p1, "uri"    # Landroid/net/Uri;

    .line 129
    if-nez p1, :cond_0

    .line 130
    const/4 v0, 0x0

    return-object v0

    .line 132
    :cond_0
    sget-object v0, Lnet/grandcentrix/tray/provider/TrayContentProvider;->sURIMatcher:Landroid/content/UriMatcher;

    invoke-virtual {v0, p1}, Landroid/content/UriMatcher;->match(Landroid/net/Uri;)I

    move-result v0

    .line 133
    .local v0, "match":I
    const/16 v1, 0x6e

    if-eq v0, v1, :cond_1

    const/16 v1, 0x78

    if-eq v0, v1, :cond_1

    const/16 v1, 0x82

    if-eq v0, v1, :cond_1

    .line 138
    const-string v1, "TrayPreferences"

    return-object v1

    .line 143
    :cond_1
    const-string v1, "TrayInternal"

    return-object v1
.end method

.method public getType(Landroid/net/Uri;)Ljava/lang/String;
    .locals 1
    .param p1, "uri"    # Landroid/net/Uri;

    .line 149
    const/4 v0, 0x0

    return-object v0
.end method

.method public getWritableDatabase(Landroid/net/Uri;)Landroid/database/sqlite/SQLiteDatabase;
    .locals 1
    .param p1, "uri"    # Landroid/net/Uri;

    .line 153
    invoke-virtual {p0, p1}, Lnet/grandcentrix/tray/provider/TrayContentProvider;->shouldBackup(Landroid/net/Uri;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 154
    iget-object v0, p0, Lnet/grandcentrix/tray/provider/TrayContentProvider;->mUserDbHelper:Lnet/grandcentrix/tray/provider/TrayDBHelper;

    invoke-virtual {v0}, Landroid/database/sqlite/SQLiteOpenHelper;->getWritableDatabase()Landroid/database/sqlite/SQLiteDatabase;

    move-result-object v0

    return-object v0

    .line 156
    :cond_0
    iget-object v0, p0, Lnet/grandcentrix/tray/provider/TrayContentProvider;->mDeviceDbHelper:Lnet/grandcentrix/tray/provider/TrayDBHelper;

    invoke-virtual {v0}, Landroid/database/sqlite/SQLiteOpenHelper;->getWritableDatabase()Landroid/database/sqlite/SQLiteDatabase;

    move-result-object v0

    return-object v0
.end method

.method public insert(Landroid/net/Uri;Landroid/content/ContentValues;)Landroid/net/Uri;
    .locals 10
    .param p1, "uri"    # Landroid/net/Uri;
    .param p2, "values"    # Landroid/content/ContentValues;

    .line 162
    new-instance v0, Ljava/util/Date;

    invoke-direct {v0}, Ljava/util/Date;-><init>()V

    move-object v7, v0

    .line 163
    .local v7, "date":Ljava/util/Date;
    sget-object v0, Lnet/grandcentrix/tray/provider/TrayContentProvider;->sURIMatcher:Landroid/content/UriMatcher;

    invoke-virtual {v0, p1}, Landroid/content/UriMatcher;->match(Landroid/net/Uri;)I

    move-result v8

    .line 164
    .local v8, "match":I
    const/16 v0, 0xa

    if-eq v8, v0, :cond_1

    const/16 v0, 0x6e

    if-ne v8, v0, :cond_0

    goto :goto_0

    .line 175
    :cond_0
    new-instance v0, Ljava/lang/IllegalArgumentException;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "Insert is not supported for Uri: "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-direct {v0, v1}, Ljava/lang/IllegalArgumentException;-><init>(Ljava/lang/String;)V

    throw v0

    .line 168
    :cond_1
    :goto_0
    invoke-virtual {v7}, Ljava/util/Date;->getTime()J

    move-result-wide v0

    invoke-static {v0, v1}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v0

    const-string v1, "CREATED"

    invoke-virtual {p2, v1, v0}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/Long;)V

    .line 169
    invoke-virtual {v7}, Ljava/util/Date;->getTime()J

    move-result-wide v2

    invoke-static {v2, v3}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v0

    const-string v2, "UPDATED"

    invoke-virtual {p2, v2, v0}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/Long;)V

    .line 170
    invoke-virtual {p1}, Landroid/net/Uri;->getPathSegments()Ljava/util/List;

    move-result-object v0

    const/4 v2, 0x1

    invoke-interface {v0, v2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/String;

    const-string v3, "MODULE"

    invoke-virtual {p2, v3, v0}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/String;)V

    .line 171
    invoke-virtual {p1}, Landroid/net/Uri;->getPathSegments()Ljava/util/List;

    move-result-object v0

    const/4 v4, 0x2

    invoke-interface {v0, v4}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/String;

    const-string v5, "KEY"

    invoke-virtual {p2, v5, v0}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/String;)V

    .line 172
    nop

    .line 178
    const-string v9, "MODULE = ?AND KEY = ?"

    .line 181
    .local v9, "prefSelection":Ljava/lang/String;
    new-array v4, v4, [Ljava/lang/String;

    const/4 v0, 0x0

    .line 182
    invoke-virtual {p2, v3}, Landroid/content/ContentValues;->getAsString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    aput-object v3, v4, v0

    .line 183
    invoke-virtual {p2, v5}, Landroid/content/ContentValues;->getAsString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    aput-object v0, v4, v2

    .line 186
    .local v4, "prefSelectionArgs":[Ljava/lang/String;
    filled-new-array {v1}, [Ljava/lang/String;

    move-result-object v6

    .line 188
    .local v6, "excludeForUpdate":[Ljava/lang/String;
    invoke-virtual {p0, p1}, Lnet/grandcentrix/tray/provider/TrayContentProvider;->getWritableDatabase(Landroid/net/Uri;)Landroid/database/sqlite/SQLiteDatabase;

    move-result-object v1

    invoke-virtual {p0, p1}, Lnet/grandcentrix/tray/provider/TrayContentProvider;->getTable(Landroid/net/Uri;)Ljava/lang/String;

    move-result-object v2

    const-string v3, "MODULE = ?AND KEY = ?"

    move-object v0, p0

    move-object v5, p2

    invoke-virtual/range {v0 .. v6}, Lnet/grandcentrix/tray/provider/TrayContentProvider;->insertOrUpdate(Landroid/database/sqlite/SQLiteDatabase;Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Landroid/content/ContentValues;[Ljava/lang/String;)I

    move-result v0

    .line 191
    .local v0, "status":I
    const/4 v1, 0x0

    if-ltz v0, :cond_2

    .line 192
    invoke-virtual {p0}, Landroid/content/ContentProvider;->getContext()Landroid/content/Context;

    move-result-object v2

    invoke-virtual {v2}, Landroid/content/Context;->getContentResolver()Landroid/content/ContentResolver;

    move-result-object v2

    invoke-virtual {v2, p1, v1}, Landroid/content/ContentResolver;->notifyChange(Landroid/net/Uri;Landroid/database/ContentObserver;)V

    .line 193
    return-object p1

    .line 195
    :cond_2
    const/4 v2, -0x1

    if-ne v0, v2, :cond_3

    .line 197
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "Couldn\'t update or insert data. Uri: "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Lnet/grandcentrix/tray/core/TrayLog;->w(Ljava/lang/String;)V

    goto :goto_1

    .line 199
    :cond_3
    const-string v2, "unknown SQLite error"

    invoke-static {v2}, Lnet/grandcentrix/tray/core/TrayLog;->w(Ljava/lang/String;)V

    .line 201
    :goto_1
    return-object v1
.end method

.method public insertOrUpdate(Landroid/database/sqlite/SQLiteDatabase;Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Landroid/content/ContentValues;[Ljava/lang/String;)I
    .locals 1
    .param p1, "writableDatabase"    # Landroid/database/sqlite/SQLiteDatabase;
    .param p2, "table"    # Ljava/lang/String;
    .param p3, "prefSelection"    # Ljava/lang/String;
    .param p4, "prefSelectionArgs"    # [Ljava/lang/String;
    .param p5, "values"    # Landroid/content/ContentValues;
    .param p6, "excludeForUpdate"    # [Ljava/lang/String;

    .line 207
    nop

    .line 208
    invoke-static/range {p1 .. p6}, Lnet/grandcentrix/tray/provider/SqliteHelper;->insertOrUpdate(Landroid/database/sqlite/SQLiteDatabase;Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Landroid/content/ContentValues;[Ljava/lang/String;)I

    move-result v0

    .line 207
    return v0
.end method

.method public onCreate()Z
    .locals 4

    .line 214
    new-instance v0, Lnet/grandcentrix/tray/provider/TrayDBHelper;

    invoke-virtual {p0}, Landroid/content/ContentProvider;->getContext()Landroid/content/Context;

    move-result-object v1

    const/4 v2, 0x1

    invoke-direct {v0, v1, v2}, Lnet/grandcentrix/tray/provider/TrayDBHelper;-><init>(Landroid/content/Context;Z)V

    iput-object v0, p0, Lnet/grandcentrix/tray/provider/TrayContentProvider;->mUserDbHelper:Lnet/grandcentrix/tray/provider/TrayDBHelper;

    .line 215
    new-instance v0, Lnet/grandcentrix/tray/provider/TrayDBHelper;

    invoke-virtual {p0}, Landroid/content/ContentProvider;->getContext()Landroid/content/Context;

    move-result-object v1

    const/4 v3, 0x0

    invoke-direct {v0, v1, v3}, Lnet/grandcentrix/tray/provider/TrayDBHelper;-><init>(Landroid/content/Context;Z)V

    iput-object v0, p0, Lnet/grandcentrix/tray/provider/TrayContentProvider;->mDeviceDbHelper:Lnet/grandcentrix/tray/provider/TrayDBHelper;

    .line 216
    return v2
.end method

.method public query(Landroid/net/Uri;[Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;)Landroid/database/Cursor;
    .locals 16
    .param p1, "uri"    # Landroid/net/Uri;
    .param p2, "projection"    # [Ljava/lang/String;
    .param p3, "selection"    # Ljava/lang/String;
    .param p4, "selectionArgs"    # [Ljava/lang/String;
    .param p5, "sortOrder"    # Ljava/lang/String;

    .line 229
    move-object/from16 v0, p0

    move-object/from16 v1, p1

    new-instance v2, Landroid/database/sqlite/SQLiteQueryBuilder;

    invoke-direct {v2}, Landroid/database/sqlite/SQLiteQueryBuilder;-><init>()V

    .line 230
    .local v2, "builder":Landroid/database/sqlite/SQLiteQueryBuilder;
    sget-object v3, Lnet/grandcentrix/tray/provider/TrayContentProvider;->sURIMatcher:Landroid/content/UriMatcher;

    invoke-virtual {v3, v1}, Landroid/content/UriMatcher;->match(Landroid/net/Uri;)I

    move-result v11

    .line 232
    .local v11, "match":I
    const/4 v12, 0x1

    const/4 v13, 0x2

    const/16 v3, 0x6e

    const/16 v4, 0xa

    if-eq v11, v4, :cond_1

    const/16 v5, 0x14

    if-eq v11, v5, :cond_2

    const/16 v5, 0x1e

    if-eq v11, v5, :cond_5

    if-eq v11, v3, :cond_1

    const/16 v5, 0x78

    if-eq v11, v5, :cond_2

    const/16 v3, 0x82

    if-ne v11, v3, :cond_0

    goto :goto_0

    .line 254
    :cond_0
    new-instance v3, Ljava/lang/IllegalArgumentException;

    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "Query is not supported for Uri: "

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-direct {v3, v4}, Ljava/lang/IllegalArgumentException;-><init>(Ljava/lang/String;)V

    throw v3

    .line 235
    :cond_1
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    const-string v6, "KEY = "

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 237
    invoke-virtual/range {p1 .. p1}, Landroid/net/Uri;->getPathSegments()Ljava/util/List;

    move-result-object v6

    invoke-interface {v6, v13}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v6

    check-cast v6, Ljava/lang/String;

    invoke-static {v6}, Landroid/database/DatabaseUtils;->sqlEscapeString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    .line 235
    invoke-virtual {v2, v5}, Landroid/database/sqlite/SQLiteQueryBuilder;->appendWhere(Ljava/lang/CharSequence;)V

    .line 241
    :cond_2
    if-eq v11, v4, :cond_3

    if-ne v11, v3, :cond_4

    .line 243
    :cond_3
    const-string v3, " AND "

    invoke-virtual {v2, v3}, Landroid/database/sqlite/SQLiteQueryBuilder;->appendWhere(Ljava/lang/CharSequence;)V

    .line 245
    :cond_4
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "MODULE = "

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 247
    invoke-virtual/range {p1 .. p1}, Landroid/net/Uri;->getPathSegments()Ljava/util/List;

    move-result-object v4

    invoke-interface {v4, v12}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Ljava/lang/String;

    invoke-static {v4}, Landroid/database/DatabaseUtils;->sqlEscapeString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    .line 245
    invoke-virtual {v2, v3}, Landroid/database/sqlite/SQLiteQueryBuilder;->appendWhere(Ljava/lang/CharSequence;)V

    .line 251
    :cond_5
    :goto_0
    invoke-virtual/range {p0 .. p1}, Lnet/grandcentrix/tray/provider/TrayContentProvider;->getTable(Landroid/net/Uri;)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Landroid/database/sqlite/SQLiteQueryBuilder;->setTables(Ljava/lang/String;)V

    .line 252
    nop

    .line 258
    const-string v3, "backup"

    invoke-virtual {v1, v3}, Landroid/net/Uri;->getQueryParameter(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v14

    .line 259
    .local v14, "backup":Ljava/lang/String;
    if-nez v14, :cond_6

    .line 261
    iget-object v3, v0, Lnet/grandcentrix/tray/provider/TrayContentProvider;->mUserDbHelper:Lnet/grandcentrix/tray/provider/TrayDBHelper;

    .line 262
    invoke-virtual {v3}, Landroid/database/sqlite/SQLiteOpenHelper;->getReadableDatabase()Landroid/database/sqlite/SQLiteDatabase;

    move-result-object v4

    const/4 v8, 0x0

    const/4 v9, 0x0

    move-object v3, v2

    move-object/from16 v5, p2

    move-object/from16 v6, p3

    move-object/from16 v7, p4

    move-object/from16 v10, p5

    invoke-virtual/range {v3 .. v10}, Landroid/database/sqlite/SQLiteQueryBuilder;->query(Landroid/database/sqlite/SQLiteDatabase;[Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Landroid/database/Cursor;

    move-result-object v15

    .line 264
    .local v15, "cursor1":Landroid/database/Cursor;
    iget-object v3, v0, Lnet/grandcentrix/tray/provider/TrayContentProvider;->mDeviceDbHelper:Lnet/grandcentrix/tray/provider/TrayDBHelper;

    .line 265
    invoke-virtual {v3}, Landroid/database/sqlite/SQLiteOpenHelper;->getReadableDatabase()Landroid/database/sqlite/SQLiteDatabase;

    move-result-object v4

    move-object v3, v2

    invoke-virtual/range {v3 .. v10}, Landroid/database/sqlite/SQLiteQueryBuilder;->query(Landroid/database/sqlite/SQLiteDatabase;[Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Landroid/database/Cursor;

    move-result-object v3

    .line 268
    .local v3, "cursor2":Landroid/database/Cursor;
    new-instance v4, Landroid/database/MergeCursor;

    new-array v5, v13, [Landroid/database/Cursor;

    const/4 v6, 0x0

    aput-object v15, v5, v6

    aput-object v3, v5, v12

    invoke-direct {v4, v5}, Landroid/database/MergeCursor;-><init>([Landroid/database/Cursor;)V

    move-object v3, v4

    .line 269
    .end local v15    # "cursor1":Landroid/database/Cursor;
    .local v3, "cursor":Landroid/database/Cursor;
    goto :goto_1

    .line 271
    .end local v3    # "cursor":Landroid/database/Cursor;
    :cond_6
    invoke-virtual/range {p0 .. p1}, Lnet/grandcentrix/tray/provider/TrayContentProvider;->getReadableDatabase(Landroid/net/Uri;)Landroid/database/sqlite/SQLiteDatabase;

    move-result-object v4

    const/4 v8, 0x0

    const/4 v9, 0x0

    move-object v3, v2

    move-object/from16 v5, p2

    move-object/from16 v6, p3

    move-object/from16 v7, p4

    move-object/from16 v10, p5

    invoke-virtual/range {v3 .. v10}, Landroid/database/sqlite/SQLiteQueryBuilder;->query(Landroid/database/sqlite/SQLiteDatabase;[Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Landroid/database/Cursor;

    move-result-object v3

    .line 275
    .restart local v3    # "cursor":Landroid/database/Cursor;
    :goto_1
    if-eqz v3, :cond_7

    .line 276
    invoke-virtual/range {p0 .. p0}, Landroid/content/ContentProvider;->getContext()Landroid/content/Context;

    move-result-object v4

    invoke-virtual {v4}, Landroid/content/Context;->getContentResolver()Landroid/content/ContentResolver;

    move-result-object v4

    invoke-interface {v3, v4, v1}, Landroid/database/Cursor;->setNotificationUri(Landroid/content/ContentResolver;Landroid/net/Uri;)V

    .line 278
    :cond_7
    return-object v3
.end method

.method shouldBackup(Landroid/net/Uri;)Z
    .locals 2
    .param p1, "uri"    # Landroid/net/Uri;
        .annotation build Landroid/support/annotation/NonNull;
        .end annotation
    .end param

    .line 326
    const-string v0, "backup"

    invoke-virtual {p1, v0}, Landroid/net/Uri;->getQueryParameter(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 327
    .local v0, "backup":Ljava/lang/String;
    const-string v1, "false"

    invoke-virtual {v1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    xor-int/lit8 v1, v1, 0x1

    return v1
.end method

.method public shutdown()V
    .locals 1

    .line 283
    iget-object v0, p0, Lnet/grandcentrix/tray/provider/TrayContentProvider;->mUserDbHelper:Lnet/grandcentrix/tray/provider/TrayDBHelper;

    invoke-virtual {v0}, Landroid/database/sqlite/SQLiteOpenHelper;->close()V

    .line 284
    iget-object v0, p0, Lnet/grandcentrix/tray/provider/TrayContentProvider;->mDeviceDbHelper:Lnet/grandcentrix/tray/provider/TrayDBHelper;

    invoke-virtual {v0}, Landroid/database/sqlite/SQLiteOpenHelper;->close()V

    .line 285
    return-void
.end method

.method public update(Landroid/net/Uri;Landroid/content/ContentValues;Ljava/lang/String;[Ljava/lang/String;)I
    .locals 2
    .param p1, "uri"    # Landroid/net/Uri;
    .param p2, "values"    # Landroid/content/ContentValues;
    .param p3, "selection"    # Ljava/lang/String;
    .param p4, "selectionArgs"    # [Ljava/lang/String;

    .line 290
    new-instance v0, Ljava/lang/UnsupportedOperationException;

    const-string v1, "not implemented"

    invoke-direct {v0, v1}, Ljava/lang/UnsupportedOperationException;-><init>(Ljava/lang/String;)V

    throw v0
.end method
