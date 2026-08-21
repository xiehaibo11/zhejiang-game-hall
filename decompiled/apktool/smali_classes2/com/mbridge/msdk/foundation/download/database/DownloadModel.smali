.class public Lcom/mbridge/msdk/foundation/download/database/DownloadModel;
.super Ljava/lang/Object;
.source "DownloadModel.java"


# static fields
.field public static final CREATE_TABLE:Ljava/lang/String; = "CREATE TABLE IF NOT EXISTS download_record( id INTEGER PRIMARY KEY AUTOINCREMENT,download_id TEXT,download_url TEXT, resource_url TEXT,etag TEXT, director_path TEXT, file_name TEXT, total_bytes INTEGER, downloaded_bytes INTEGER, last_modified_time INTEGER,download_rate INTEGER,usage_counter INTEGER,download_resource_type INTEGER,from_where INTEGER)"

.field public static final DIRECTORY_PATH:Ljava/lang/String; = "director_path"

.field public static final DOWNLOADED_BYTES:Ljava/lang/String; = "downloaded_bytes"

.field public static final DOWNLOAD_ID:Ljava/lang/String; = "download_id"

.field public static final DOWNLOAD_RATE:Ljava/lang/String; = "download_rate"

.field public static final DOWNLOAD_RESOURCE_TYPE:Ljava/lang/String; = "download_resource_type"

.field public static final DOWNLOAD_URL:Ljava/lang/String; = "download_url"

.field public static final ETAG:Ljava/lang/String; = "etag"

.field public static final FILE_NAME:Ljava/lang/String; = "file_name"

.field public static final ID:Ljava/lang/String; = "id"

.field public static final LAST_MODIFIED_TIME:Ljava/lang/String; = "last_modified_time"

.field public static final RESOURCE_FROM:Ljava/lang/String; = "from_where"

.field public static final RESOURCE_URL:Ljava/lang/String; = "resource_url"

.field public static final TABLE_NAME:Ljava/lang/String; = "download_record"

.field public static final TOTAL_BYTES:Ljava/lang/String; = "total_bytes"

.field public static final USAGE_COUNTER:Ljava/lang/String; = "usage_counter"


# instance fields
.field private downloadId:Ljava/lang/String;

.field private downloadRate:I

.field private downloadResourceType:Lcom/mbridge/msdk/foundation/download/DownloadResourceType;

.field private downloadUrl:Ljava/lang/String;

.field private downloadedBytes:J

.field private etag:Ljava/lang/String;

.field private from:I

.field private lastModifiedTime:J

.field private resourceUrl:Ljava/lang/String;

.field private saveDirectorPath:Ljava/lang/String;

.field private saveFileName:Ljava/lang/String;

.field private totalBytes:J

.field private unZipResourceByte:J

.field private unZipResourceDirectory:Ljava/lang/String;

.field private usageCounter:I


# direct methods
.method private constructor <init>()V
    .locals 0

    .line 101
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static create(Lcom/mbridge/msdk/foundation/download/database/DownloadModel;)Landroid/content/ContentValues;
    .locals 3

    .line 245
    new-instance v0, Landroid/content/ContentValues;

    invoke-direct {v0}, Landroid/content/ContentValues;-><init>()V

    .line 246
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/download/database/DownloadModel;->getDownloadId()Ljava/lang/String;

    move-result-object v1

    const-string v2, "download_id"

    invoke-virtual {v0, v2, v1}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/String;)V

    .line 247
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/download/database/DownloadModel;->getDownloadUrl()Ljava/lang/String;

    move-result-object v1

    const-string v2, "download_url"

    invoke-virtual {v0, v2, v1}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/String;)V

    .line 248
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/download/database/DownloadModel;->getResourceUrl()Ljava/lang/String;

    move-result-object v1

    const-string v2, "resource_url"

    invoke-virtual {v0, v2, v1}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/String;)V

    .line 249
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/download/database/DownloadModel;->getEtag()Ljava/lang/String;

    move-result-object v1

    const-string v2, "etag"

    invoke-virtual {v0, v2, v1}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/String;)V

    .line 250
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/download/database/DownloadModel;->getSaveDirectorPath()Ljava/lang/String;

    move-result-object v1

    const-string v2, "director_path"

    invoke-virtual {v0, v2, v1}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/String;)V

    .line 251
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/download/database/DownloadModel;->getSaveFileName()Ljava/lang/String;

    move-result-object v1

    const-string v2, "file_name"

    invoke-virtual {v0, v2, v1}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/String;)V

    .line 252
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/download/database/DownloadModel;->getTotalBytes()J

    move-result-wide v1

    invoke-static {v1, v2}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v1

    const-string v2, "total_bytes"

    invoke-virtual {v0, v2, v1}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/Long;)V

    .line 253
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/download/database/DownloadModel;->getDownloadedBytes()J

    move-result-wide v1

    invoke-static {v1, v2}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v1

    const-string v2, "downloaded_bytes"

    invoke-virtual {v0, v2, v1}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/Long;)V

    .line 254
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/download/database/DownloadModel;->getLastModifiedTime()J

    move-result-wide v1

    invoke-static {v1, v2}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v1

    const-string v2, "last_modified_time"

    invoke-virtual {v0, v2, v1}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/Long;)V

    .line 255
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/download/database/DownloadModel;->getDownloadRate()I

    move-result v1

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    const-string v2, "download_rate"

    invoke-virtual {v0, v2, v1}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/Integer;)V

    .line 256
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/download/database/DownloadModel;->getUsageCounter()I

    move-result v1

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    const-string v2, "usage_counter"

    invoke-virtual {v0, v2, v1}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/Integer;)V

    .line 257
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/download/database/DownloadModel;->getDownloadResourceType()Lcom/mbridge/msdk/foundation/download/DownloadResourceType;

    move-result-object v1

    iget v1, v1, Lcom/mbridge/msdk/foundation/download/DownloadResourceType;->resourceType:I

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    const-string v2, "download_resource_type"

    invoke-virtual {v0, v2, v1}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/Integer;)V

    .line 258
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/download/database/DownloadModel;->getFrom()I

    move-result p0

    invoke-static {p0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p0

    const-string v1, "from_where"

    invoke-virtual {v0, v1, p0}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/Integer;)V

    return-object v0
.end method

.method public static create(Landroid/database/Cursor;)Lcom/mbridge/msdk/foundation/download/database/DownloadModel;
    .locals 3

    .line 227
    new-instance v0, Lcom/mbridge/msdk/foundation/download/database/DownloadModel;

    invoke-direct {v0}, Lcom/mbridge/msdk/foundation/download/database/DownloadModel;-><init>()V

    const-string v1, "download_id"

    .line 228
    invoke-interface {p0, v1}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v1

    invoke-interface {p0, v1}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/foundation/download/database/DownloadModel;->setDownloadId(Ljava/lang/String;)V

    const-string v1, "download_url"

    .line 229
    invoke-interface {p0, v1}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v1

    invoke-interface {p0, v1}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/foundation/download/database/DownloadModel;->setDownloadUrl(Ljava/lang/String;)V

    const-string v1, "resource_url"

    .line 230
    invoke-interface {p0, v1}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v1

    invoke-interface {p0, v1}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/foundation/download/database/DownloadModel;->setResourceUrl(Ljava/lang/String;)V

    const-string v1, "etag"

    .line 231
    invoke-interface {p0, v1}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v1

    invoke-interface {p0, v1}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/foundation/download/database/DownloadModel;->setEtag(Ljava/lang/String;)V

    const-string v1, "director_path"

    .line 232
    invoke-interface {p0, v1}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v1

    invoke-interface {p0, v1}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/foundation/download/database/DownloadModel;->setSaveDirectorPath(Ljava/lang/String;)V

    const-string v1, "file_name"

    .line 233
    invoke-interface {p0, v1}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v1

    invoke-interface {p0, v1}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/foundation/download/database/DownloadModel;->setSaveFileName(Ljava/lang/String;)V

    const-string v1, "total_bytes"

    .line 234
    invoke-interface {p0, v1}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v1

    invoke-interface {p0, v1}, Landroid/database/Cursor;->getLong(I)J

    move-result-wide v1

    invoke-virtual {v0, v1, v2}, Lcom/mbridge/msdk/foundation/download/database/DownloadModel;->setTotalBytes(J)V

    const-string v1, "downloaded_bytes"

    .line 235
    invoke-interface {p0, v1}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v1

    invoke-interface {p0, v1}, Landroid/database/Cursor;->getLong(I)J

    move-result-wide v1

    invoke-virtual {v0, v1, v2}, Lcom/mbridge/msdk/foundation/download/database/DownloadModel;->setDownloadedBytes(J)V

    const-string v1, "last_modified_time"

    .line 236
    invoke-interface {p0, v1}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v1

    invoke-interface {p0, v1}, Landroid/database/Cursor;->getLong(I)J

    move-result-wide v1

    invoke-virtual {v0, v1, v2}, Lcom/mbridge/msdk/foundation/download/database/DownloadModel;->setLastModifiedTime(J)V

    const-string v1, "download_rate"

    .line 237
    invoke-interface {p0, v1}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v1

    invoke-interface {p0, v1}, Landroid/database/Cursor;->getInt(I)I

    move-result v1

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/foundation/download/database/DownloadModel;->setDownloadRate(I)V

    const-string v1, "usage_counter"

    .line 238
    invoke-interface {p0, v1}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v1

    invoke-interface {p0, v1}, Landroid/database/Cursor;->getInt(I)I

    move-result v1

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/foundation/download/database/DownloadModel;->setUsageCounter(I)V

    const-string v1, "download_resource_type"

    .line 239
    invoke-interface {p0, v1}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v1

    invoke-interface {p0, v1}, Landroid/database/Cursor;->getInt(I)I

    move-result v1

    invoke-static {v1}, Lcom/mbridge/msdk/foundation/download/DownloadResourceType;->getDownloadResourceType(I)Lcom/mbridge/msdk/foundation/download/DownloadResourceType;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/foundation/download/database/DownloadModel;->setDownloadResourceType(Lcom/mbridge/msdk/foundation/download/DownloadResourceType;)V

    const-string v1, "from_where"

    .line 240
    invoke-interface {p0, v1}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v1

    invoke-interface {p0, v1}, Landroid/database/Cursor;->getInt(I)I

    move-result p0

    invoke-virtual {v0, p0}, Lcom/mbridge/msdk/foundation/download/database/DownloadModel;->setFrom(I)V

    return-object v0
.end method

.method public static create(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;JJIILcom/mbridge/msdk/foundation/download/DownloadResourceType;)Lcom/mbridge/msdk/foundation/download/database/DownloadModel;
    .locals 1

    .line 207
    new-instance v0, Lcom/mbridge/msdk/foundation/download/database/DownloadModel;

    invoke-direct {v0}, Lcom/mbridge/msdk/foundation/download/database/DownloadModel;-><init>()V

    .line 208
    invoke-virtual {v0, p0}, Lcom/mbridge/msdk/foundation/download/database/DownloadModel;->setDownloadId(Ljava/lang/String;)V

    .line 209
    invoke-virtual {v0, p1}, Lcom/mbridge/msdk/foundation/download/database/DownloadModel;->setDownloadUrl(Ljava/lang/String;)V

    .line 210
    invoke-virtual {v0, p2}, Lcom/mbridge/msdk/foundation/download/database/DownloadModel;->setResourceUrl(Ljava/lang/String;)V

    .line 211
    invoke-virtual {v0, p3}, Lcom/mbridge/msdk/foundation/download/database/DownloadModel;->setEtag(Ljava/lang/String;)V

    .line 212
    invoke-virtual {v0, p4}, Lcom/mbridge/msdk/foundation/download/database/DownloadModel;->setSaveDirectorPath(Ljava/lang/String;)V

    .line 213
    invoke-virtual {v0, p5}, Lcom/mbridge/msdk/foundation/download/database/DownloadModel;->setSaveFileName(Ljava/lang/String;)V

    .line 214
    invoke-virtual {v0, p8, p9}, Lcom/mbridge/msdk/foundation/download/database/DownloadModel;->setDownloadedBytes(J)V

    .line 215
    invoke-virtual {v0, p6, p7}, Lcom/mbridge/msdk/foundation/download/database/DownloadModel;->setTotalBytes(J)V

    .line 216
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide p0

    invoke-virtual {v0, p0, p1}, Lcom/mbridge/msdk/foundation/download/database/DownloadModel;->setLastModifiedTime(J)V

    .line 217
    invoke-virtual {v0, p11}, Lcom/mbridge/msdk/foundation/download/database/DownloadModel;->setUsageCounter(I)V

    .line 218
    invoke-virtual {v0, p10}, Lcom/mbridge/msdk/foundation/download/database/DownloadModel;->setDownloadRate(I)V

    .line 219
    invoke-virtual {v0, p12}, Lcom/mbridge/msdk/foundation/download/database/DownloadModel;->setDownloadResourceType(Lcom/mbridge/msdk/foundation/download/DownloadResourceType;)V

    const/4 p0, 0x0

    .line 220
    invoke-virtual {v0, p0}, Lcom/mbridge/msdk/foundation/download/database/DownloadModel;->setUnZipResourceDirectory(Ljava/lang/String;)V

    const-wide/16 p0, 0x0

    .line 221
    invoke-virtual {v0, p0, p1}, Lcom/mbridge/msdk/foundation/download/database/DownloadModel;->setUnZipResourceByte(J)V

    const/4 p0, 0x0

    .line 222
    invoke-virtual {v0, p0}, Lcom/mbridge/msdk/foundation/download/database/DownloadModel;->setFrom(I)V

    return-object v0
.end method

.method public static create(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;JJIILcom/mbridge/msdk/foundation/download/DownloadResourceType;I)Lcom/mbridge/msdk/foundation/download/database/DownloadModel;
    .locals 1

    .line 187
    new-instance v0, Lcom/mbridge/msdk/foundation/download/database/DownloadModel;

    invoke-direct {v0}, Lcom/mbridge/msdk/foundation/download/database/DownloadModel;-><init>()V

    .line 188
    invoke-virtual {v0, p0}, Lcom/mbridge/msdk/foundation/download/database/DownloadModel;->setDownloadId(Ljava/lang/String;)V

    .line 189
    invoke-virtual {v0, p1}, Lcom/mbridge/msdk/foundation/download/database/DownloadModel;->setDownloadUrl(Ljava/lang/String;)V

    .line 190
    invoke-virtual {v0, p2}, Lcom/mbridge/msdk/foundation/download/database/DownloadModel;->setResourceUrl(Ljava/lang/String;)V

    .line 191
    invoke-virtual {v0, p3}, Lcom/mbridge/msdk/foundation/download/database/DownloadModel;->setEtag(Ljava/lang/String;)V

    .line 192
    invoke-virtual {v0, p4}, Lcom/mbridge/msdk/foundation/download/database/DownloadModel;->setSaveDirectorPath(Ljava/lang/String;)V

    .line 193
    invoke-virtual {v0, p5}, Lcom/mbridge/msdk/foundation/download/database/DownloadModel;->setSaveFileName(Ljava/lang/String;)V

    .line 194
    invoke-virtual {v0, p8, p9}, Lcom/mbridge/msdk/foundation/download/database/DownloadModel;->setDownloadedBytes(J)V

    .line 195
    invoke-virtual {v0, p6, p7}, Lcom/mbridge/msdk/foundation/download/database/DownloadModel;->setTotalBytes(J)V

    .line 196
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide p0

    invoke-virtual {v0, p0, p1}, Lcom/mbridge/msdk/foundation/download/database/DownloadModel;->setLastModifiedTime(J)V

    .line 197
    invoke-virtual {v0, p11}, Lcom/mbridge/msdk/foundation/download/database/DownloadModel;->setUsageCounter(I)V

    .line 198
    invoke-virtual {v0, p10}, Lcom/mbridge/msdk/foundation/download/database/DownloadModel;->setDownloadRate(I)V

    .line 199
    invoke-virtual {v0, p12}, Lcom/mbridge/msdk/foundation/download/database/DownloadModel;->setDownloadResourceType(Lcom/mbridge/msdk/foundation/download/DownloadResourceType;)V

    const/4 p0, 0x0

    .line 200
    invoke-virtual {v0, p0}, Lcom/mbridge/msdk/foundation/download/database/DownloadModel;->setUnZipResourceDirectory(Ljava/lang/String;)V

    const-wide/16 p0, 0x0

    .line 201
    invoke-virtual {v0, p0, p1}, Lcom/mbridge/msdk/foundation/download/database/DownloadModel;->setUnZipResourceByte(J)V

    .line 202
    invoke-virtual {v0, p13}, Lcom/mbridge/msdk/foundation/download/database/DownloadModel;->setFrom(I)V

    return-object v0
.end method


# virtual methods
.method public getDownloadId()Ljava/lang/String;
    .locals 1

    .line 105
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/download/database/DownloadModel;->downloadId:Ljava/lang/String;

    return-object v0
.end method

.method public getDownloadRate()I
    .locals 1

    .line 178
    iget v0, p0, Lcom/mbridge/msdk/foundation/download/database/DownloadModel;->downloadRate:I

    return v0
.end method

.method public getDownloadResourceType()Lcom/mbridge/msdk/foundation/download/DownloadResourceType;
    .locals 1

    .line 264
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/download/database/DownloadModel;->downloadResourceType:Lcom/mbridge/msdk/foundation/download/DownloadResourceType;

    return-object v0
.end method

.method public getDownloadUrl()Ljava/lang/String;
    .locals 1

    .line 113
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/download/database/DownloadModel;->downloadUrl:Ljava/lang/String;

    return-object v0
.end method

.method public getDownloadedBytes()J
    .locals 2

    .line 153
    iget-wide v0, p0, Lcom/mbridge/msdk/foundation/download/database/DownloadModel;->downloadedBytes:J

    return-wide v0
.end method

.method public getEtag()Ljava/lang/String;
    .locals 1

    .line 121
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/download/database/DownloadModel;->etag:Ljava/lang/String;

    return-object v0
.end method

.method public getFrom()I
    .locals 1

    .line 296
    iget v0, p0, Lcom/mbridge/msdk/foundation/download/database/DownloadModel;->from:I

    return v0
.end method

.method public getLastModifiedTime()J
    .locals 2

    .line 161
    iget-wide v0, p0, Lcom/mbridge/msdk/foundation/download/database/DownloadModel;->lastModifiedTime:J

    return-wide v0
.end method

.method public getResourceUrl()Ljava/lang/String;
    .locals 1

    .line 288
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/download/database/DownloadModel;->resourceUrl:Ljava/lang/String;

    return-object v0
.end method

.method public getSaveDirectorPath()Ljava/lang/String;
    .locals 1

    .line 129
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/download/database/DownloadModel;->saveDirectorPath:Ljava/lang/String;

    return-object v0
.end method

.method public getSaveFileName()Ljava/lang/String;
    .locals 1

    .line 137
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/download/database/DownloadModel;->saveFileName:Ljava/lang/String;

    return-object v0
.end method

.method public getTotalBytes()J
    .locals 2

    .line 145
    iget-wide v0, p0, Lcom/mbridge/msdk/foundation/download/database/DownloadModel;->totalBytes:J

    return-wide v0
.end method

.method public getUnZipResourceByte()J
    .locals 2

    .line 280
    iget-wide v0, p0, Lcom/mbridge/msdk/foundation/download/database/DownloadModel;->unZipResourceByte:J

    return-wide v0
.end method

.method public getUnZipResourceDirectory()Ljava/lang/String;
    .locals 1

    .line 272
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/download/database/DownloadModel;->unZipResourceDirectory:Ljava/lang/String;

    return-object v0
.end method

.method public getUsageCounter()I
    .locals 1

    .line 170
    iget v0, p0, Lcom/mbridge/msdk/foundation/download/database/DownloadModel;->usageCounter:I

    return v0
.end method

.method public setDownloadId(Ljava/lang/String;)V
    .locals 0

    .line 109
    iput-object p1, p0, Lcom/mbridge/msdk/foundation/download/database/DownloadModel;->downloadId:Ljava/lang/String;

    return-void
.end method

.method public setDownloadRate(I)V
    .locals 0

    .line 182
    iput p1, p0, Lcom/mbridge/msdk/foundation/download/database/DownloadModel;->downloadRate:I

    return-void
.end method

.method public setDownloadResourceType(Lcom/mbridge/msdk/foundation/download/DownloadResourceType;)V
    .locals 0

    .line 268
    iput-object p1, p0, Lcom/mbridge/msdk/foundation/download/database/DownloadModel;->downloadResourceType:Lcom/mbridge/msdk/foundation/download/DownloadResourceType;

    return-void
.end method

.method public setDownloadUrl(Ljava/lang/String;)V
    .locals 0

    .line 117
    iput-object p1, p0, Lcom/mbridge/msdk/foundation/download/database/DownloadModel;->downloadUrl:Ljava/lang/String;

    return-void
.end method

.method public setDownloadedBytes(J)V
    .locals 0

    .line 157
    iput-wide p1, p0, Lcom/mbridge/msdk/foundation/download/database/DownloadModel;->downloadedBytes:J

    return-void
.end method

.method public setEtag(Ljava/lang/String;)V
    .locals 0

    .line 125
    iput-object p1, p0, Lcom/mbridge/msdk/foundation/download/database/DownloadModel;->etag:Ljava/lang/String;

    return-void
.end method

.method public setFrom(I)V
    .locals 0

    .line 300
    iput p1, p0, Lcom/mbridge/msdk/foundation/download/database/DownloadModel;->from:I

    return-void
.end method

.method public setLastModifiedTime(J)V
    .locals 0

    .line 165
    iput-wide p1, p0, Lcom/mbridge/msdk/foundation/download/database/DownloadModel;->lastModifiedTime:J

    return-void
.end method

.method public setResourceUrl(Ljava/lang/String;)V
    .locals 0

    .line 292
    iput-object p1, p0, Lcom/mbridge/msdk/foundation/download/database/DownloadModel;->resourceUrl:Ljava/lang/String;

    return-void
.end method

.method public setSaveDirectorPath(Ljava/lang/String;)V
    .locals 0

    .line 133
    iput-object p1, p0, Lcom/mbridge/msdk/foundation/download/database/DownloadModel;->saveDirectorPath:Ljava/lang/String;

    return-void
.end method

.method public setSaveFileName(Ljava/lang/String;)V
    .locals 0

    .line 141
    iput-object p1, p0, Lcom/mbridge/msdk/foundation/download/database/DownloadModel;->saveFileName:Ljava/lang/String;

    return-void
.end method

.method public setTotalBytes(J)V
    .locals 0

    .line 149
    iput-wide p1, p0, Lcom/mbridge/msdk/foundation/download/database/DownloadModel;->totalBytes:J

    return-void
.end method

.method public setUnZipResourceByte(J)V
    .locals 0

    .line 284
    iput-wide p1, p0, Lcom/mbridge/msdk/foundation/download/database/DownloadModel;->unZipResourceByte:J

    return-void
.end method

.method public setUnZipResourceDirectory(Ljava/lang/String;)V
    .locals 0

    .line 276
    iput-object p1, p0, Lcom/mbridge/msdk/foundation/download/database/DownloadModel;->unZipResourceDirectory:Ljava/lang/String;

    return-void
.end method

.method public setUsageCounter(I)V
    .locals 0

    .line 174
    iput p1, p0, Lcom/mbridge/msdk/foundation/download/database/DownloadModel;->usageCounter:I

    return-void
.end method
