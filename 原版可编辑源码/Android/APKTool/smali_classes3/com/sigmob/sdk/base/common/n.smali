.class public Lcom/sigmob/sdk/base/common/n;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/sigmob/sdk/base/common/n$a;
    }
.end annotation


# static fields
.field private static a:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field private static b:Ljava/util/Set;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Set<",
            "Lcom/sigmob/sdk/base/common/n$a;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method static constructor <clinit>()V
    .locals 1

    new-instance v0, Ljava/util/Hashtable;

    invoke-direct {v0}, Ljava/util/Hashtable;-><init>()V

    sput-object v0, Lcom/sigmob/sdk/base/common/n;->a:Ljava/util/Map;

    new-instance v0, Ljava/util/concurrent/CopyOnWriteArraySet;

    invoke-direct {v0}, Ljava/util/concurrent/CopyOnWriteArraySet;-><init>()V

    sput-object v0, Lcom/sigmob/sdk/base/common/n;->b:Ljava/util/Set;

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private static a(Ljava/lang/String;Ljava/lang/String;)J
    .locals 4

    const-wide/16 v0, -0x1

    if-eqz p0, :cond_4

    :try_start_0
    invoke-virtual {p0}, Ljava/lang/String;->isEmpty()Z

    move-result v2

    if-eqz v2, :cond_0

    goto/16 :goto_0

    :cond_0
    invoke-virtual {p0}, Ljava/lang/String;->trim()Ljava/lang/String;

    move-result-object p0

    const-string v2, "http"

    invoke-virtual {p0, v2}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v2

    if-nez v2, :cond_1

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "http://"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    :cond_1
    new-instance v2, Landroid/app/DownloadManager$Request;

    invoke-static {p0}, Landroid/net/Uri;->parse(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object p0

    invoke-direct {v2, p0}, Landroid/app/DownloadManager$Request;-><init>(Landroid/net/Uri;)V

    new-instance p0, Ljava/io/File;

    invoke-direct {p0, p1}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    invoke-virtual {p0}, Ljava/io/File;->getName()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v2, p1}, Landroid/app/DownloadManager$Request;->setTitle(Ljava/lang/CharSequence;)Landroid/app/DownloadManager$Request;

    const/4 p1, 0x3

    invoke-virtual {v2, p1}, Landroid/app/DownloadManager$Request;->setAllowedNetworkTypes(I)Landroid/app/DownloadManager$Request;

    const/4 p1, 0x1

    invoke-virtual {v2, p1}, Landroid/app/DownloadManager$Request;->setAllowedOverRoaming(Z)Landroid/app/DownloadManager$Request;

    invoke-virtual {v2, p1}, Landroid/app/DownloadManager$Request;->setVisibleInDownloadsUi(Z)Landroid/app/DownloadManager$Request;

    invoke-virtual {v2, p1}, Landroid/app/DownloadManager$Request;->setNotificationVisibility(I)Landroid/app/DownloadManager$Request;

    invoke-virtual {p0}, Ljava/io/File;->getParentFile()Ljava/io/File;

    move-result-object p1

    invoke-virtual {p1}, Ljava/io/File;->exists()Z

    move-result v3

    if-eqz v3, :cond_2

    invoke-virtual {p1}, Ljava/io/File;->isDirectory()Z

    move-result v3

    if-nez v3, :cond_3

    invoke-virtual {p1}, Ljava/io/File;->delete()Z

    invoke-virtual {p1}, Ljava/io/File;->mkdirs()Z

    move-result p1

    if-nez p1, :cond_3

    return-wide v0

    :cond_2
    invoke-virtual {p1}, Ljava/io/File;->mkdirs()Z

    move-result p1

    if-nez p1, :cond_3

    return-wide v0

    :cond_3
    const-string p1, "User-Agent"

    invoke-static {}, Lcom/czhj/sdk/common/network/Networking;->getUserAgent()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, p1, v3}, Landroid/app/DownloadManager$Request;->addRequestHeader(Ljava/lang/String;Ljava/lang/String;)Landroid/app/DownloadManager$Request;

    invoke-static {p0}, Landroid/net/Uri;->fromFile(Ljava/io/File;)Landroid/net/Uri;

    move-result-object p0

    invoke-virtual {v2, p0}, Landroid/app/DownloadManager$Request;->setDestinationUri(Landroid/net/Uri;)Landroid/app/DownloadManager$Request;

    invoke-static {}, Lcom/sigmob/sdk/b;->b()Landroid/content/Context;

    move-result-object p0

    const-string p1, "download"

    invoke-virtual {p0, p1}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Landroid/app/DownloadManager;

    invoke-virtual {p0, v2}, Landroid/app/DownloadManager;->enqueue(Landroid/app/DownloadManager$Request;)J

    move-result-wide p0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-wide p0

    :catchall_0
    move-exception p0

    invoke-virtual {p0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p0

    invoke-static {p0}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;)V

    :cond_4
    :goto_0
    return-wide v0
.end method

.method public static a(Ljava/io/File;)Ljava/lang/String;
    .locals 2

    invoke-virtual {p0}, Ljava/io/File;->getName()Ljava/lang/String;

    move-result-object p0

    const-string v0, "."

    invoke-virtual {p0, v0}, Ljava/lang/String;->lastIndexOf(Ljava/lang/String;)I

    move-result v0

    add-int/lit8 v0, v0, 0x1

    invoke-virtual {p0}, Ljava/lang/String;->length()I

    move-result v1

    invoke-virtual {p0, v0, v1}, Ljava/lang/String;->substring(II)Ljava/lang/String;

    move-result-object p0

    invoke-virtual {p0}, Ljava/lang/String;->toLowerCase()Ljava/lang/String;

    move-result-object p0

    invoke-static {}, Landroid/webkit/MimeTypeMap;->getSingleton()Landroid/webkit/MimeTypeMap;

    move-result-object v0

    invoke-virtual {v0, p0}, Landroid/webkit/MimeTypeMap;->getMimeTypeFromExtension(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method private static a(Ljava/util/List;Ljava/lang/String;)Ljava/lang/String;
    .locals 9
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;",
            "Ljava/lang/String;",
            ")",
            "Ljava/lang/String;"
        }
    .end annotation

    invoke-interface {p0, p1}, Ljava/util/List;->contains(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_0

    return-object p1

    :cond_0
    const-string v0, "."

    invoke-virtual {p1, v0}, Ljava/lang/String;->lastIndexOf(Ljava/lang/String;)I

    move-result v0

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v1

    const/4 v2, 0x0

    const-string v3, ""

    const/4 v4, -0x1

    if-eq v1, v4, :cond_1

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v1

    invoke-virtual {p1, v2, v1}, Ljava/lang/String;->substring(II)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    invoke-virtual {p1, v0}, Ljava/lang/String;->substring(I)Ljava/lang/String;

    move-result-object p1

    goto :goto_0

    :cond_1
    move-object p1, v3

    :goto_0
    const-string v0, "("

    invoke-virtual {v3, v0}, Ljava/lang/String;->lastIndexOf(Ljava/lang/String;)I

    move-result v1

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/Integer;->intValue()I

    move-result v5

    const-string v6, "(1)"

    if-ne v5, v4, :cond_2

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    :goto_1
    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p0, p1}, Lcom/sigmob/sdk/base/common/n;->a(Ljava/util/List;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    return-object p0

    :cond_2
    invoke-virtual {v1}, Ljava/lang/Integer;->intValue()I

    move-result v5

    const-string v7, ")"

    invoke-virtual {v3, v7, v5}, Ljava/lang/String;->indexOf(Ljava/lang/String;I)I

    move-result v5

    invoke-static {v5}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v5

    invoke-virtual {v5}, Ljava/lang/Integer;->intValue()I

    move-result v8

    if-ne v8, v4, :cond_3

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    goto :goto_1

    :cond_3
    invoke-virtual {v5}, Ljava/lang/Integer;->intValue()I

    move-result v4

    invoke-virtual {v3}, Ljava/lang/String;->length()I

    move-result v8

    add-int/lit8 v8, v8, -0x1

    if-ge v4, v8, :cond_4

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    goto :goto_1

    :cond_4
    invoke-virtual {v1}, Ljava/lang/Integer;->intValue()I

    move-result v4

    add-int/lit8 v4, v4, 0x1

    invoke-virtual {v5}, Ljava/lang/Integer;->intValue()I

    move-result v5

    invoke-virtual {v3, v4, v5}, Ljava/lang/String;->substring(II)Ljava/lang/String;

    move-result-object v4

    :try_start_0
    invoke-static {v4}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v4

    add-int/lit8 v4, v4, 0x1

    invoke-static {v4}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v4

    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1}, Ljava/lang/Integer;->intValue()I

    move-result v1

    invoke-virtual {v3, v2, v1}, Ljava/lang/String;->substring(II)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v5, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {p0, v0}, Lcom/sigmob/sdk/base/common/n;->a(Ljava/util/List;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-object p0

    :catchall_0
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    goto/16 :goto_1
.end method

.method public static a(Landroid/app/DownloadManager;)Ljava/util/HashMap;
    .locals 5
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/app/DownloadManager;",
            ")",
            "Ljava/util/HashMap<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;"
        }
    .end annotation

    const/4 v0, 0x0

    :try_start_0
    new-instance v1, Landroid/app/DownloadManager$Query;

    invoke-direct {v1}, Landroid/app/DownloadManager$Query;-><init>()V

    const/4 v2, 0x3

    invoke-virtual {v1, v2}, Landroid/app/DownloadManager$Query;->setFilterByStatus(I)Landroid/app/DownloadManager$Query;

    invoke-virtual {p0, v1}, Landroid/app/DownloadManager;->query(Landroid/app/DownloadManager$Query;)Landroid/database/Cursor;

    move-result-object p0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    :try_start_1
    invoke-interface {p0}, Landroid/database/Cursor;->moveToFirst()Z

    move-result v1

    if-nez v1, :cond_1

    invoke-interface {p0}, Landroid/database/Cursor;->close()V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    if-eqz p0, :cond_0

    invoke-interface {p0}, Landroid/database/Cursor;->close()V

    :cond_0
    return-object v0

    :cond_1
    :try_start_2
    new-instance v1, Ljava/util/HashMap;

    invoke-direct {v1}, Ljava/util/HashMap;-><init>()V

    const-string v2, "title"

    invoke-interface {p0, v2}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v2

    invoke-interface {p0, v2}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object v2

    const-string v3, "_id"

    invoke-interface {p0, v3}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v3

    invoke-interface {p0, v3}, Landroid/database/Cursor;->getLong(I)J

    move-result-wide v3

    invoke-static {v3, v4}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v3

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    if-nez v4, :cond_2

    invoke-virtual {v1, v2, v3}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    :cond_2
    invoke-interface {p0}, Landroid/database/Cursor;->moveToNext()Z

    invoke-interface {p0}, Landroid/database/Cursor;->close()V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    return-object v1

    :catchall_0
    move-exception v1

    goto :goto_0

    :catchall_1
    move-exception v1

    move-object p0, v0

    :goto_0
    :try_start_3
    invoke-virtual {v1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;)V
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_2

    if-eqz p0, :cond_3

    invoke-interface {p0}, Landroid/database/Cursor;->close()V

    :cond_3
    return-object v0

    :catchall_2
    move-exception v0

    if-eqz p0, :cond_4

    invoke-interface {p0}, Landroid/database/Cursor;->close()V

    :cond_4
    throw v0
.end method

.method public static a(Landroid/app/DownloadManager;J)Ljava/util/Map;
    .locals 7
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/app/DownloadManager;",
            "J)",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;"
        }
    .end annotation

    const-string v0, "reason"

    const-string v1, "status"

    const/4 v2, 0x0

    :try_start_0
    new-instance v3, Landroid/app/DownloadManager$Query;

    invoke-direct {v3}, Landroid/app/DownloadManager$Query;-><init>()V

    const/4 v4, 0x1

    new-array v4, v4, [J

    const/4 v5, 0x0

    aput-wide p1, v4, v5

    invoke-virtual {v3, v4}, Landroid/app/DownloadManager$Query;->setFilterById([J)Landroid/app/DownloadManager$Query;

    invoke-virtual {p0, p1, p2}, Landroid/app/DownloadManager;->getUriForDownloadedFile(J)Landroid/net/Uri;

    move-result-object p1

    invoke-virtual {p0, v3}, Landroid/app/DownloadManager;->query(Landroid/app/DownloadManager$Query;)Landroid/database/Cursor;

    move-result-object p0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    :try_start_1
    invoke-interface {p0}, Landroid/database/Cursor;->moveToFirst()Z

    move-result p2

    if-nez p2, :cond_1

    invoke-interface {p0}, Landroid/database/Cursor;->close()V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    if-eqz p0, :cond_0

    invoke-interface {p0}, Landroid/database/Cursor;->close()V

    :cond_0
    return-object v2

    :cond_1
    :try_start_2
    invoke-interface {p0, v1}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result p2

    invoke-interface {p0, p2}, Landroid/database/Cursor;->getInt(I)I

    move-result p2

    invoke-interface {p0, v0}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v3

    invoke-interface {p0, v3}, Landroid/database/Cursor;->getInt(I)I

    move-result v3

    const-string v4, "local_uri"

    invoke-interface {p0, v4}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v4

    invoke-interface {p0, v4}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object v4

    new-instance v5, Ljava/util/HashMap;

    invoke-direct {v5}, Ljava/util/HashMap;-><init>()V

    const-string v6, "fileName"

    invoke-virtual {v5, v6, v4}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    invoke-static {p2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p2

    invoke-virtual {v5, v1, p2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string p2, "uri"

    invoke-virtual {v5, p2, p1}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    invoke-static {v3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p1

    invoke-virtual {v5, v0, p1}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    invoke-interface {p0}, Landroid/database/Cursor;->close()V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    return-object v5

    :catchall_0
    move-exception p1

    goto :goto_0

    :catchall_1
    move-exception p1

    move-object p0, v2

    :goto_0
    :try_start_3
    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;)V
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_2

    if-eqz p0, :cond_2

    invoke-interface {p0}, Landroid/database/Cursor;->close()V

    :cond_2
    return-object v2

    :catchall_2
    move-exception p1

    if-eqz p0, :cond_3

    invoke-interface {p0}, Landroid/database/Cursor;->close()V

    :cond_3
    throw p1
.end method

.method public static a(Landroid/content/Context;Ljava/lang/String;Lcom/sigmob/sdk/base/models/BaseAdUnit;)V
    .locals 6

    new-instance v0, Ljava/io/File;

    invoke-direct {v0, p1}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "installAPK:"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, ":"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/io/File;->exists()Z

    move-result v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/czhj/sdk/logger/SigmobLog;->i(Ljava/lang/String;)V

    new-instance v1, Landroid/content/Intent;

    invoke-direct {v1}, Landroid/content/Intent;-><init>()V

    const/high16 v2, 0x10000000

    invoke-virtual {v1, v2}, Landroid/content/Intent;->addFlags(I)Landroid/content/Intent;

    const-string v2, "android.intent.action.VIEW"

    invoke-virtual {v1, v2}, Landroid/content/Intent;->setAction(Ljava/lang/String;)Landroid/content/Intent;

    const/4 v2, 0x1

    :try_start_0
    const-string v3, "\u5f00\u59cb\u5b89\u88c5"

    invoke-static {p0, v3, v2}, Landroid/widget/Toast;->makeText(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;

    move-result-object v3

    invoke-virtual {v3}, Landroid/widget/Toast;->show()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v3

    invoke-virtual {v3}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v3

    invoke-static {v3}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;)V

    :goto_0
    sget v3, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v4, 0x18

    if-lt v3, v4, :cond_1

    invoke-virtual {p0}, Landroid/content/Context;->getApplicationInfo()Landroid/content/pm/ApplicationInfo;

    move-result-object v3

    iget v3, v3, Landroid/content/pm/ApplicationInfo;->targetSdkVersion:I

    if-ge v3, v4, :cond_0

    goto :goto_1

    :cond_0
    :try_start_1
    invoke-static {}, Lcom/sigmob/sdk/b;->b()Landroid/content/Context;

    move-result-object v3

    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-static {}, Lcom/sigmob/sdk/b;->b()Landroid/content/Context;

    move-result-object v5

    invoke-virtual {v5}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v5, ".sigprovider"

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-static {v3, v4, v0}, Lcom/sigmob/sdk/SigmobFileProvider;->getUriForFile(Landroid/content/Context;Ljava/lang/String;Ljava/io/File;)Landroid/net/Uri;

    move-result-object v0

    if-eqz v0, :cond_2

    invoke-virtual {v1, v2}, Landroid/content/Intent;->addFlags(I)Landroid/content/Intent;

    const-string v2, "application/vnd.android.package-archive"

    invoke-virtual {v1, v0, v2}, Landroid/content/Intent;->setDataAndType(Landroid/net/Uri;Ljava/lang/String;)Landroid/content/Intent;
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    goto :goto_2

    :catch_0
    move-exception v0

    invoke-virtual {v0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;)V

    goto :goto_2

    :cond_1
    :goto_1
    invoke-static {v0}, Landroid/net/Uri;->fromFile(Ljava/io/File;)Landroid/net/Uri;

    move-result-object v2

    invoke-static {v0}, Lcom/sigmob/sdk/base/common/n;->a(Ljava/io/File;)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v1, v2, v0}, Landroid/content/Intent;->setDataAndType(Landroid/net/Uri;Ljava/lang/String;)Landroid/content/Intent;

    :cond_2
    :goto_2
    invoke-virtual {p0, v1}, Landroid/content/Context;->startActivity(Landroid/content/Intent;)V

    sget-object v0, Lcom/sigmob/sdk/base/common/a;->G:Lcom/sigmob/sdk/base/common/a;

    invoke-static {p2, v0}, Lcom/sigmob/sdk/base/network/f;->a(Lcom/sigmob/sdk/base/models/BaseAdUnit;Lcom/sigmob/sdk/base/common/a;)V

    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    const-string v1, "1"

    const-string v2, "result"

    invoke-virtual {v0, v2, v1}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    invoke-virtual {p2}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getUuid()Ljava/lang/String;

    move-result-object v2

    const-string v3, "com.sigmob.action.interstitial.install.start"

    invoke-static {p0, v2, v0, v3}, Lcom/sigmob/sdk/base/common/BaseBroadcastReceiver;->a(Landroid/content/Context;Ljava/lang/String;Ljava/util/Map;Ljava/lang/String;)V

    invoke-static {p0, p1}, Lcom/czhj/sdk/common/ClientMetadata;->getPackageInfoWithUri(Landroid/content/Context;Ljava/lang/String;)Landroid/content/pm/PackageInfo;

    move-result-object p0

    if-eqz p0, :cond_3

    new-instance p1, Ljava/io/File;

    invoke-static {}, Lcom/sigmob/sdk/base/utils/b;->f()Ljava/lang/String;

    move-result-object v0

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v3, p0, Landroid/content/pm/PackageInfo;->packageName:Ljava/lang/String;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, ".log"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-direct {p1, v0, v2}, Ljava/io/File;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    invoke-virtual {p1}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object p1

    invoke-static {p2, p1}, Lcom/czhj/sdk/common/utils/FileUtil;->writeToCache(Ljava/lang/Object;Ljava/lang/String;)V

    :cond_3
    invoke-virtual {p2}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->isRecord()Z

    move-result p1

    if-eqz p1, :cond_4

    const-string p1, "app_install_start"

    invoke-static {p2, p1, p0, v1}, Lcom/sigmob/sdk/base/common/z;->a(Lcom/sigmob/sdk/base/models/BaseAdUnit;Ljava/lang/String;Landroid/content/pm/PackageInfo;Ljava/lang/String;)V

    :cond_4
    return-void
.end method

.method public static a(Ljava/lang/String;Lcom/sigmob/sdk/base/models/BaseAdUnit;)V
    .locals 5

    invoke-static {}, Lcom/sigmob/sdk/b;->b()Landroid/content/Context;

    move-result-object v0

    :try_start_0
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "download apk:"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/czhj/sdk/logger/SigmobLog;->i(Ljava/lang/String;)V

    invoke-static {p1}, Lcom/sigmob/sdk/base/common/f;->b(Lcom/sigmob/sdk/base/models/BaseAdUnit;)V

    invoke-static {p0}, Lcom/sigmob/sdk/base/common/o;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-eqz v2, :cond_0

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getProductId()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_0

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getProductId()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, ".apk"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    :cond_0
    invoke-static {v1, p0, p1}, Lcom/sigmob/sdk/base/common/n;->a(Ljava/lang/String;Ljava/lang/String;Lcom/sigmob/sdk/base/models/BaseAdUnit;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v1

    invoke-virtual {v1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;)V

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->isRecord()Z

    move-result v2

    if-eqz v2, :cond_1

    new-instance v2, Lcom/sigmob/sdk/base/common/n$5;

    invoke-direct {v2, p0}, Lcom/sigmob/sdk/base/common/n$5;-><init>(Ljava/lang/String;)V

    const-string v3, "download_start"

    const-string v4, "0"

    invoke-static {v3, v4, p1, v2}, Lcom/sigmob/sdk/base/common/z;->a(Ljava/lang/String;Ljava/lang/String;Lcom/sigmob/sdk/base/models/BaseAdUnit;Lcom/sigmob/sdk/base/common/z$a;)V

    const/4 v2, 0x0

    invoke-virtual {v1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v1

    new-instance v4, Lcom/sigmob/sdk/base/common/n$6;

    invoke-direct {v4, p0}, Lcom/sigmob/sdk/base/common/n$6;-><init>(Ljava/lang/String;)V

    invoke-static {v3, v2, v1, p1, v4}, Lcom/sigmob/sdk/base/common/z;->a(Ljava/lang/String;ILjava/lang/String;Lcom/sigmob/sdk/base/models/BaseAdUnit;Lcom/sigmob/sdk/base/common/z$a;)V

    :cond_1
    :try_start_1
    const-string p0, "\u4e0b\u8f7d\u5931\u8d25"

    const/4 p1, 0x1

    invoke-static {v0, p0, p1}, Landroid/widget/Toast;->makeText(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;

    move-result-object p0

    invoke-virtual {p0}, Landroid/widget/Toast;->show()V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    goto :goto_0

    :catchall_1
    move-exception p0

    invoke-virtual {p0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p0

    invoke-static {p0}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;)V

    :goto_0
    return-void
.end method

.method private static a(Ljava/lang/String;Ljava/lang/String;Lcom/sigmob/sdk/base/models/BaseAdUnit;)V
    .locals 20

    move-object/from16 v1, p1

    move-object/from16 v2, p2

    const-string v3, "download_start"

    const-string v4, "com.sigmob.action.interstitial.download.start"

    const-string v5, "downloadId"

    const-string v6, "0"

    const-string v7, "result"

    invoke-static {}, Lcom/sigmob/sdk/b;->b()Landroid/content/Context;

    move-result-object v8

    const/4 v10, 0x1

    :try_start_0
    invoke-static/range {p0 .. p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual/range {p2 .. p2}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getLanding_page()Ljava/lang/String;

    move-result-object v11

    invoke-static {v11}, Lcom/czhj/sdk/common/utils/Md5Util;->md5(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v11

    invoke-virtual {v0, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v11, ".apk"

    invoke-virtual {v0, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    move-object v11, v0

    goto :goto_0

    :cond_0
    move-object/from16 v11, p0

    :goto_0
    new-instance v12, Ljava/io/File;

    invoke-static {v8}, Lcom/sigmob/sdk/base/utils/b;->a(Landroid/content/Context;)Ljava/io/File;

    move-result-object v0

    invoke-direct {v12, v0, v11}, Ljava/io/File;-><init>(Ljava/io/File;Ljava/lang/String;)V

    invoke-virtual {v12}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object v0

    const-wide/16 v13, -0x1

    invoke-static {v13, v14, v0}, Lcom/sigmob/sdk/base/common/n;->c(JLjava/lang/String;)Ljava/lang/Long;

    move-result-object v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_4

    const-string v15, "\u5f53\u524d\u6b63\u5728\u52aa\u529b\u4e0b\u8f7d\uff0c\u8bf7\u7a0d\u7b49"

    if-eqz v0, :cond_1

    :try_start_1
    invoke-virtual {v0}, Ljava/lang/Long;->longValue()J

    move-result-wide v16
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_4

    const-wide/16 v18, 0x0

    cmp-long v16, v16, v18

    if-lez v16, :cond_1

    :try_start_2
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v15}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v8, v1, v10}, Landroid/widget/Toast;->makeText(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;

    move-result-object v1

    invoke-virtual {v1}, Landroid/widget/Toast;->show()V

    invoke-virtual {v0}, Ljava/lang/Long;->longValue()J

    move-result-wide v0

    invoke-virtual {v2, v0, v1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->setDownloadId(J)V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    :catchall_0
    return-void

    :cond_1
    :try_start_3
    const-string v0, "download"

    invoke-virtual {v8, v0}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/app/DownloadManager;

    invoke-static {v0}, Lcom/sigmob/sdk/base/common/n;->a(Landroid/app/DownloadManager;)Ljava/util/HashMap;

    move-result-object v0
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_4

    const-string v9, "1"

    if-eqz v0, :cond_4

    :try_start_4
    invoke-virtual {v0}, Ljava/util/HashMap;->keySet()Ljava/util/Set;

    move-result-object v17

    invoke-interface/range {v17 .. v17}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v17

    :goto_1
    invoke-interface/range {v17 .. v17}, Ljava/util/Iterator;->hasNext()Z

    move-result v18

    if-eqz v18, :cond_4

    invoke-interface/range {v17 .. v17}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v18

    move-object/from16 v13, v18

    check-cast v13, Ljava/lang/String;

    invoke-static {v13}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v14

    if-nez v14, :cond_3

    invoke-virtual {v13, v11}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v14
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_4

    if-eqz v14, :cond_3

    :try_start_5
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v15}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v8, v1, v10}, Landroid/widget/Toast;->makeText(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;

    move-result-object v1

    invoke-virtual {v1}, Landroid/widget/Toast;->show()V
    :try_end_5
    .catchall {:try_start_5 .. :try_end_5} :catchall_1

    :catchall_1
    :try_start_6
    invoke-virtual {v0, v13}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    instance-of v1, v0, Ljava/lang/Long;

    if-eqz v1, :cond_2

    move-object v1, v0

    check-cast v1, Ljava/lang/Long;

    invoke-virtual {v1}, Ljava/lang/Long;->longValue()J

    move-result-wide v10

    invoke-virtual {v2, v10, v11}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->setDownloadId(J)V

    new-instance v1, Ljava/util/HashMap;

    invoke-direct {v1}, Ljava/util/HashMap;-><init>()V

    invoke-virtual {v1, v7, v9}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    invoke-virtual {v1, v5, v0}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    invoke-virtual/range {p2 .. p2}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getUuid()Ljava/lang/String;

    move-result-object v0

    invoke-static {v8, v0, v1, v4}, Lcom/sigmob/sdk/base/common/BaseBroadcastReceiver;->a(Landroid/content/Context;Ljava/lang/String;Ljava/util/Map;Ljava/lang/String;)V
    :try_end_6
    .catchall {:try_start_6 .. :try_end_6} :catchall_2

    :catchall_2
    :cond_2
    return-void

    :cond_3
    const-wide/16 v13, -0x1

    goto :goto_1

    :cond_4
    :try_start_7
    sget-object v0, Lcom/sigmob/sdk/base/common/n;->a:Ljava/util/Map;

    invoke-virtual/range {p2 .. p2}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getUuid()Ljava/lang/String;

    move-result-object v13

    invoke-interface {v0, v13}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v0

    invoke-virtual {v12}, Ljava/io/File;->exists()Z

    move-result v13

    if-eqz v13, :cond_5

    if-nez v0, :cond_5

    invoke-virtual {v12}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object v13

    invoke-static {v8, v13}, Lcom/sigmob/sdk/base/common/n;->a(Landroid/content/Context;Ljava/lang/String;)Z

    move-result v13

    if-nez v13, :cond_5

    invoke-virtual {v12}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object v13

    invoke-static {v13}, Lcom/czhj/sdk/common/utils/FileUtil;->deleteFile(Ljava/lang/String;)Z

    move-result v13

    new-instance v14, Ljava/lang/StringBuilder;

    invoke-direct {v14}, Ljava/lang/StringBuilder;-><init>()V

    const-string v15, "cacheFile deleteFile:"

    invoke-virtual {v14, v15}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v14, v13}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v14}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v13

    invoke-static {v13}, Lcom/czhj/sdk/logger/SigmobLog;->i(Ljava/lang/String;)V

    :cond_5
    new-instance v13, Ljava/lang/StringBuilder;

    invoke-direct {v13}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v13, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v14, " exists:"

    invoke-virtual {v13, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v12}, Ljava/io/File;->exists()Z

    move-result v14

    invoke-virtual {v13, v14}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    const-string v14, " containsKey:"

    invoke-virtual {v13, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v0}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v13}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v13

    invoke-static {v13}, Lcom/czhj/sdk/logger/SigmobLog;->i(Ljava/lang/String;)V

    invoke-virtual {v12}, Ljava/io/File;->exists()Z

    move-result v13

    if-eqz v13, :cond_9

    if-eqz v0, :cond_6

    invoke-virtual {v12}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object v0

    invoke-static {v8, v0, v2}, Lcom/sigmob/sdk/base/common/n;->a(Landroid/content/Context;Ljava/lang/String;Lcom/sigmob/sdk/base/models/BaseAdUnit;)V

    return-void

    :cond_6
    invoke-virtual {v12}, Ljava/io/File;->lastModified()J

    move-result-wide v13

    invoke-static {}, Lcom/sigmob/sdk/base/i;->a()Lcom/sigmob/sdk/base/i;

    move-result-object v0

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/i;->M()I

    move-result v0

    if-nez v0, :cond_7

    invoke-virtual {v12}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/czhj/sdk/common/utils/FileUtil;->deleteFile(Ljava/lang/String;)Z

    move-result v0

    new-instance v13, Ljava/lang/StringBuilder;

    invoke-direct {v13}, Ljava/lang/StringBuilder;-><init>()V

    const-string v14, "default deleteFile:"

    invoke-virtual {v13, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v0}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v13}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    :goto_2
    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->i(Ljava/lang/String;)V

    goto :goto_3

    :cond_7
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v17

    sub-long v17, v17, v13

    mul-int/lit16 v0, v0, 0x3e8

    int-to-long v13, v0

    cmp-long v0, v17, v13

    if-lez v0, :cond_8

    invoke-virtual {v12}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/czhj/sdk/common/utils/FileUtil;->deleteFile(Ljava/lang/String;)Z

    move-result v0

    new-instance v13, Ljava/lang/StringBuilder;

    invoke-direct {v13}, Ljava/lang/StringBuilder;-><init>()V

    const-string v14, "timeOut deleteFile:"

    invoke-virtual {v13, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v0}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v13}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    goto :goto_2

    :cond_8
    invoke-virtual {v12}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object v0

    invoke-static {v8, v0, v2}, Lcom/sigmob/sdk/base/common/n;->a(Landroid/content/Context;Ljava/lang/String;Lcom/sigmob/sdk/base/models/BaseAdUnit;)V
    :try_end_7
    .catchall {:try_start_7 .. :try_end_7} :catchall_4

    return-void

    :cond_9
    :goto_3
    :try_start_8
    const-string v0, "\u4e0b\u8f7d\u5f00\u59cb"

    invoke-static {v8, v0, v10}, Landroid/widget/Toast;->makeText(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;

    move-result-object v0

    invoke-virtual {v0}, Landroid/widget/Toast;->show()V
    :try_end_8
    .catchall {:try_start_8 .. :try_end_8} :catchall_3

    goto :goto_4

    :catchall_3
    move-exception v0

    :try_start_9
    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;)V

    :goto_4
    sget-object v0, Lcom/sigmob/sdk/base/common/n;->a:Ljava/util/Map;

    invoke-virtual/range {p2 .. p2}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getUuid()Ljava/lang/String;

    move-result-object v13

    invoke-interface {v0, v13, v11}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    invoke-virtual {v12}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object v0

    invoke-static {v1, v0}, Lcom/sigmob/sdk/base/common/n;->a(Ljava/lang/String;Ljava/lang/String;)J

    move-result-wide v13

    const-wide/16 v17, -0x1

    cmp-long v0, v13, v17

    if-eqz v0, :cond_b

    invoke-virtual {v12}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object v0

    invoke-static {v13, v14, v0}, Lcom/sigmob/sdk/base/common/n;->a(JLjava/lang/String;)Z

    new-instance v0, Ljava/io/File;

    invoke-static {}, Lcom/sigmob/sdk/base/utils/b;->f()Ljava/lang/String;

    move-result-object v11

    new-instance v15, Ljava/lang/StringBuilder;

    invoke-direct {v15}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v15, v13, v14}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    const-string v10, ".log"

    invoke-virtual {v15, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v10

    invoke-direct {v0, v11, v10}, Ljava/io/File;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    invoke-virtual {v2, v13, v14}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->setDownloadId(J)V

    invoke-virtual {v0}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object v0

    invoke-static {v2, v0}, Lcom/czhj/sdk/common/utils/FileUtil;->writeToCache(Ljava/lang/Object;Ljava/lang/String;)V

    invoke-virtual/range {p2 .. p2}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->isRecord()Z

    move-result v0

    if-eqz v0, :cond_a

    new-instance v0, Lcom/sigmob/sdk/base/common/n$1;

    invoke-direct {v0, v1, v12}, Lcom/sigmob/sdk/base/common/n$1;-><init>(Ljava/lang/String;Ljava/io/File;)V

    invoke-static {v3, v9, v2, v0}, Lcom/sigmob/sdk/base/common/z;->a(Ljava/lang/String;Ljava/lang/String;Lcom/sigmob/sdk/base/models/BaseAdUnit;Lcom/sigmob/sdk/base/common/z$a;)V

    :cond_a
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    invoke-virtual {v0, v7, v9}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    invoke-static {v13, v14}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v9

    invoke-virtual {v0, v5, v9}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    invoke-virtual/range {p2 .. p2}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getUuid()Ljava/lang/String;

    move-result-object v9

    :goto_5
    invoke-static {v8, v9, v0, v4}, Lcom/sigmob/sdk/base/common/BaseBroadcastReceiver;->a(Landroid/content/Context;Ljava/lang/String;Ljava/util/Map;Ljava/lang/String;)V

    goto :goto_7

    :cond_b
    invoke-virtual/range {p2 .. p2}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->isRecord()Z

    move-result v0

    if-eqz v0, :cond_c

    new-instance v0, Lcom/sigmob/sdk/base/common/n$2;

    invoke-direct {v0, v1, v12}, Lcom/sigmob/sdk/base/common/n$2;-><init>(Ljava/lang/String;Ljava/io/File;)V

    invoke-static {v3, v6, v2, v0}, Lcom/sigmob/sdk/base/common/z;->a(Ljava/lang/String;Ljava/lang/String;Lcom/sigmob/sdk/base/models/BaseAdUnit;Lcom/sigmob/sdk/base/common/z$a;)V

    :cond_c
    const-string v0, "android.permission.WRITE_EXTERNAL_STORAGE"

    invoke-static {v8, v0}, Lcom/czhj/sdk/common/ClientMetadata;->isPermissionGranted(Landroid/content/Context;Ljava/lang/String;)Z

    move-result v0
    :try_end_9
    .catchall {:try_start_9 .. :try_end_9} :catchall_4

    const-string v9, "download_failed"

    if-nez v0, :cond_d

    :try_start_a
    const-string v0, "\u8bf7\u5148\u7ed9\u4e88\u5e94\u7528 WRITE_EXTERNAL_STORAGE \u6743\u9650"

    const/4 v10, 0x1

    invoke-static {v8, v0, v10}, Landroid/widget/Toast;->makeText(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;

    move-result-object v0

    invoke-virtual {v0}, Landroid/widget/Toast;->show()V

    invoke-virtual/range {p2 .. p2}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->isRecord()Z

    move-result v0

    if-eqz v0, :cond_e

    const-string v0, " No permission Manifest.permission.WRITE_EXTERNAL_STORAGE "

    invoke-static {v9, v10, v0, v2}, Lcom/sigmob/sdk/base/common/z;->a(Ljava/lang/String;ILjava/lang/String;Lcom/sigmob/sdk/base/models/BaseAdUnit;)V

    goto :goto_6

    :cond_d
    invoke-virtual/range {p2 .. p2}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->isRecord()Z

    move-result v0

    if-eqz v0, :cond_e

    const/4 v0, 0x2

    const-string v10, "download Directory not exist"

    invoke-static {v9, v0, v10, v2}, Lcom/sigmob/sdk/base/common/z;->a(Ljava/lang/String;ILjava/lang/String;Lcom/sigmob/sdk/base/models/BaseAdUnit;)V

    :cond_e
    :goto_6
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    invoke-virtual {v0, v7, v6}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const/4 v9, -0x1

    invoke-static {v9}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v10

    invoke-virtual {v0, v5, v10}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    invoke-virtual/range {p2 .. p2}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getUuid()Ljava/lang/String;

    move-result-object v9

    goto :goto_5

    :goto_7
    invoke-virtual/range {p2 .. p2}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->isRecord()Z

    move-result v0

    if-eqz v0, :cond_10

    sget-object v0, Lcom/sigmob/sdk/base/common/a;->E:Lcom/sigmob/sdk/base/common/a;

    invoke-static {v2, v0}, Lcom/sigmob/sdk/base/network/f;->a(Lcom/sigmob/sdk/base/models/BaseAdUnit;Lcom/sigmob/sdk/base/common/a;)V
    :try_end_a
    .catchall {:try_start_a .. :try_end_a} :catchall_4

    goto :goto_8

    :catchall_4
    move-exception v0

    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v9

    invoke-static {v9}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;)V

    invoke-virtual/range {p2 .. p2}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->isRecord()Z

    move-result v9

    if-eqz v9, :cond_f

    new-instance v9, Lcom/sigmob/sdk/base/common/n$3;

    invoke-direct {v9, v1}, Lcom/sigmob/sdk/base/common/n$3;-><init>(Ljava/lang/String;)V

    invoke-static {v3, v6, v2, v9}, Lcom/sigmob/sdk/base/common/z;->a(Ljava/lang/String;Ljava/lang/String;Lcom/sigmob/sdk/base/models/BaseAdUnit;Lcom/sigmob/sdk/base/common/z$a;)V

    const/4 v9, 0x0

    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    new-instance v10, Lcom/sigmob/sdk/base/common/n$4;

    invoke-direct {v10, v1}, Lcom/sigmob/sdk/base/common/n$4;-><init>(Ljava/lang/String;)V

    invoke-static {v3, v9, v0, v2, v10}, Lcom/sigmob/sdk/base/common/z;->a(Ljava/lang/String;ILjava/lang/String;Lcom/sigmob/sdk/base/models/BaseAdUnit;Lcom/sigmob/sdk/base/common/z$a;)V

    :cond_f
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    invoke-virtual {v0, v7, v6}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const/4 v1, -0x1

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    invoke-virtual {v0, v5, v1}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    invoke-virtual/range {p2 .. p2}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getUuid()Ljava/lang/String;

    move-result-object v1

    invoke-static {v8, v1, v0, v4}, Lcom/sigmob/sdk/base/common/BaseBroadcastReceiver;->a(Landroid/content/Context;Ljava/lang/String;Ljava/util/Map;Ljava/lang/String;)V

    :try_start_b
    const-string v0, "\u8bf7\u5148\u7ed9\u4e88\u5e94\u7528\u6743\u9650"

    const/4 v1, 0x1

    invoke-static {v8, v0, v1}, Landroid/widget/Toast;->makeText(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;

    move-result-object v0

    invoke-virtual {v0}, Landroid/widget/Toast;->show()V
    :try_end_b
    .catchall {:try_start_b .. :try_end_b} :catchall_5

    :catchall_5
    :cond_10
    :goto_8
    return-void
.end method

.method public static a(JLjava/lang/String;)Z
    .locals 3

    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    const/4 p0, 0x0

    return p0

    :cond_0
    sget-object v0, Lcom/sigmob/sdk/base/common/n;->b:Ljava/util/Set;

    new-instance v1, Lcom/sigmob/sdk/base/common/n$a;

    const/4 v2, 0x0

    invoke-direct {v1, p2, v2, p0, p1}, Lcom/sigmob/sdk/base/common/n$a;-><init>(Ljava/lang/String;Ljava/lang/String;J)V

    invoke-interface {v0, v1}, Ljava/util/Set;->add(Ljava/lang/Object;)Z

    const/4 p0, 0x1

    return p0
.end method

.method public static a(Landroid/content/Context;Ljava/lang/String;)Z
    .locals 2

    const/4 v0, 0x0

    :try_start_0
    invoke-virtual {p0}, Landroid/content/Context;->getPackageManager()Landroid/content/pm/PackageManager;

    move-result-object p0

    const/4 v1, 0x1

    invoke-virtual {p0, p1, v1}, Landroid/content/pm/PackageManager;->getPackageArchiveInfo(Ljava/lang/String;I)Landroid/content/pm/PackageInfo;

    move-result-object p0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    if-eqz p0, :cond_0

    move v0, v1

    :catch_0
    :cond_0
    return v0
.end method

.method public static a(Ljava/lang/String;)Z
    .locals 5

    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    return v1

    :cond_0
    invoke-static {}, Lcom/sigmob/sdk/b;->b()Landroid/content/Context;

    move-result-object v0

    const-string v2, "download"

    invoke-virtual {v0, v2}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/app/DownloadManager;

    const/4 v2, 0x0

    :try_start_0
    new-instance v3, Landroid/app/DownloadManager$Query;

    invoke-direct {v3}, Landroid/app/DownloadManager$Query;-><init>()V

    const/4 v4, 0x3

    invoke-virtual {v3, v4}, Landroid/app/DownloadManager$Query;->setFilterByStatus(I)Landroid/app/DownloadManager$Query;

    invoke-virtual {v0, v3}, Landroid/app/DownloadManager;->query(Landroid/app/DownloadManager$Query;)Landroid/database/Cursor;

    move-result-object v2

    invoke-interface {v2}, Landroid/database/Cursor;->moveToFirst()Z

    move-result v0

    if-nez v0, :cond_2

    invoke-interface {v2}, Landroid/database/Cursor;->close()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-eqz v2, :cond_1

    invoke-interface {v2}, Landroid/database/Cursor;->close()V

    :cond_1
    return v1

    :cond_2
    :try_start_1
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    :cond_3
    const-string v0, "uri"

    invoke-interface {v2, v0}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v0

    invoke-interface {v2, v0}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-nez v3, :cond_5

    invoke-virtual {p0, v0}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    if-eqz v0, :cond_5

    const/4 p0, 0x1

    if-eqz v2, :cond_4

    invoke-interface {v2}, Landroid/database/Cursor;->close()V

    :cond_4
    return p0

    :cond_5
    :try_start_2
    invoke-interface {v2}, Landroid/database/Cursor;->moveToNext()Z

    move-result v0

    if-nez v0, :cond_3

    invoke-interface {v2}, Landroid/database/Cursor;->close()V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    return v1

    :catchall_0
    move-exception p0

    :try_start_3
    invoke-virtual {p0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p0

    invoke-static {p0}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;)V
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_1

    if-eqz v2, :cond_6

    invoke-interface {v2}, Landroid/database/Cursor;->close()V

    :cond_6
    return v1

    :catchall_1
    move-exception p0

    if-eqz v2, :cond_7

    invoke-interface {v2}, Landroid/database/Cursor;->close()V

    :cond_7
    throw p0
.end method

.method public static a(Landroid/content/Context;Ljava/lang/Long;)[J
    .locals 6

    const/4 v0, 0x3

    new-array v0, v0, [J

    fill-array-data v0, :array_0

    if-eqz p1, :cond_4

    invoke-virtual {p1}, Ljava/lang/Long;->longValue()J

    move-result-wide v1

    const-wide/16 v3, 0x0

    cmp-long v1, v1, v3

    if-gez v1, :cond_0

    goto :goto_0

    :cond_0
    new-instance v1, Landroid/app/DownloadManager$Query;

    invoke-direct {v1}, Landroid/app/DownloadManager$Query;-><init>()V

    const/4 v2, 0x1

    new-array v3, v2, [J

    invoke-virtual {p1}, Ljava/lang/Long;->longValue()J

    move-result-wide v4

    const/4 p1, 0x0

    aput-wide v4, v3, p1

    invoke-virtual {v1, v3}, Landroid/app/DownloadManager$Query;->setFilterById([J)Landroid/app/DownloadManager$Query;

    move-result-object v1

    const/4 v3, 0x0

    :try_start_0
    const-string v4, "download"

    invoke-virtual {p0, v4}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Landroid/app/DownloadManager;

    invoke-virtual {p0, v1}, Landroid/app/DownloadManager;->query(Landroid/app/DownloadManager$Query;)Landroid/database/Cursor;

    move-result-object v3

    if-eqz v3, :cond_1

    invoke-interface {v3}, Landroid/database/Cursor;->moveToFirst()Z

    move-result p0

    if-eqz p0, :cond_1

    const-string p0, "bytes_so_far"

    invoke-interface {v3, p0}, Landroid/database/Cursor;->getColumnIndexOrThrow(Ljava/lang/String;)I

    move-result p0

    invoke-interface {v3, p0}, Landroid/database/Cursor;->getInt(I)I

    move-result p0

    int-to-long v4, p0

    aput-wide v4, v0, p1

    const-string p0, "total_size"

    invoke-interface {v3, p0}, Landroid/database/Cursor;->getColumnIndexOrThrow(Ljava/lang/String;)I

    move-result p0

    invoke-interface {v3, p0}, Landroid/database/Cursor;->getInt(I)I

    move-result p0

    int-to-long p0, p0

    aput-wide p0, v0, v2

    const/4 p0, 0x2

    const-string p1, "status"

    invoke-interface {v3, p1}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result p1

    invoke-interface {v3, p1}, Landroid/database/Cursor;->getInt(I)I

    move-result p1

    int-to-long v1, p1

    aput-wide v1, v0, p0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :cond_1
    if-eqz v3, :cond_2

    invoke-interface {v3}, Landroid/database/Cursor;->close()V

    :cond_2
    return-object v0

    :catchall_0
    move-exception p0

    if-eqz v3, :cond_3

    invoke-interface {v3}, Landroid/database/Cursor;->close()V

    :cond_3
    throw p0

    :cond_4
    :goto_0
    return-object v0

    nop

    :array_0
    .array-data 8
        -0x1
        -0x1
        0x0
    .end array-data
.end method

.method public static b(JLjava/lang/String;)V
    .locals 4

    sget-object v0, Lcom/sigmob/sdk/base/common/n;->b:Ljava/util/Set;

    invoke-interface {v0}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :cond_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_2

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/sigmob/sdk/base/common/n$a;

    iget-wide v2, v1, Lcom/sigmob/sdk/base/common/n$a;->c:J

    cmp-long v2, v2, p0

    if-eqz v2, :cond_1

    iget-object v2, v1, Lcom/sigmob/sdk/base/common/n$a;->a:Ljava/lang/String;

    invoke-virtual {v2, p2}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v2

    if-eqz v2, :cond_0

    :cond_1
    sget-object p0, Lcom/sigmob/sdk/base/common/n;->b:Ljava/util/Set;

    invoke-interface {p0, v1}, Ljava/util/Set;->remove(Ljava/lang/Object;)Z

    :cond_2
    return-void
.end method

.method public static c(JLjava/lang/String;)Ljava/lang/Long;
    .locals 4

    sget-object v0, Lcom/sigmob/sdk/base/common/n;->b:Ljava/util/Set;

    invoke-interface {v0}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :cond_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_2

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/sigmob/sdk/base/common/n$a;

    iget-wide v2, v1, Lcom/sigmob/sdk/base/common/n$a;->c:J

    cmp-long v2, v2, p0

    if-eqz v2, :cond_1

    iget-object v2, v1, Lcom/sigmob/sdk/base/common/n$a;->a:Ljava/lang/String;

    invoke-virtual {v2, p2}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v2

    if-eqz v2, :cond_0

    :cond_1
    iget-wide p0, v1, Lcom/sigmob/sdk/base/common/n$a;->c:J

    invoke-static {p0, p1}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object p0

    return-object p0

    :cond_2
    const/4 p0, 0x0

    return-object p0
.end method
