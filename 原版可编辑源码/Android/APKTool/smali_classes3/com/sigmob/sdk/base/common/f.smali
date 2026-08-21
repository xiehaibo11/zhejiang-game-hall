.class public Lcom/sigmob/sdk/base/common/f;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/sigmob/sdk/base/common/f$d;,
        Lcom/sigmob/sdk/base/common/f$c;,
        Lcom/sigmob/sdk/base/common/f$b;,
        Lcom/sigmob/sdk/base/common/f$a;
    }
.end annotation


# static fields
.field private static final b:Ljava/lang/Integer;

.field private static final c:Ljava/lang/Integer;

.field private static final d:Ljava/lang/Integer;

.field private static final e:Ljava/lang/Integer;

.field private static final f:J = 0x7d000L

.field private static final g:J = 0xf000L

.field private static h:Lcom/sigmob/sdk/base/common/f;

.field private static i:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Lcom/sigmob/sdk/base/models/BaseAdUnit;",
            ">;"
        }
    .end annotation
.end field

.field private static j:Lcom/sigmob/sdk/videocache/h;

.field private static k:Ljava/util/HashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/HashMap<",
            "Ljava/lang/String;",
            "Ljava/lang/Integer;",
            ">;"
        }
    .end annotation
.end field

.field private static volatile l:Lcom/czhj/sdk/common/utils/ImageManager;

.field private static v:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/util/List<",
            "Lcom/sigmob/sdk/base/models/BaseAdUnit;",
            ">;>;"
        }
    .end annotation
.end field


# instance fields
.field final a:Lcom/czhj/volley/toolbox/FileDownloadRequest$FileDownloadListener;

.field private m:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field private n:Ljava/util/HashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/HashMap<",
            "Ljava/lang/String;",
            "Ljava/lang/Long;",
            ">;"
        }
    .end annotation
.end field

.field private o:Ljava/util/HashSet;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/HashSet<",
            "Lcom/sigmob/sdk/base/common/f$a;",
            ">;"
        }
    .end annotation
.end field

.field private p:Ljava/util/ArrayList;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/ArrayList<",
            "Lcom/sigmob/sdk/base/models/BaseAdUnit;",
            ">;"
        }
    .end annotation
.end field

.field private q:Ljava/util/HashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/HashMap<",
            "Ljava/lang/String;",
            "Lcom/czhj/sdk/common/models/AdCache;",
            ">;"
        }
    .end annotation
.end field

.field private r:Ljava/lang/String;

.field private s:Ljava/lang/String;

.field private t:Ljava/util/HashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/HashMap<",
            "Ljava/lang/String;",
            "Ljava/lang/ref/WeakReference<",
            "Lcom/sigmob/sdk/base/common/f$b;",
            ">;>;"
        }
    .end annotation
.end field

.field private u:Ljava/util/HashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/HashMap<",
            "Ljava/lang/String;",
            "Lcom/czhj/sdk/common/models/AdCache;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method static constructor <clinit>()V
    .locals 1

    const/4 v0, 0x0

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    sput-object v0, Lcom/sigmob/sdk/base/common/f;->b:Ljava/lang/Integer;

    const/4 v0, 0x1

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    sput-object v0, Lcom/sigmob/sdk/base/common/f;->c:Ljava/lang/Integer;

    const/4 v0, 0x2

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    sput-object v0, Lcom/sigmob/sdk/base/common/f;->d:Ljava/lang/Integer;

    const/4 v0, 0x3

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    sput-object v0, Lcom/sigmob/sdk/base/common/f;->e:Ljava/lang/Integer;

    const/4 v0, 0x0

    sput-object v0, Lcom/sigmob/sdk/base/common/f;->h:Lcom/sigmob/sdk/base/common/f;

    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    sput-object v0, Lcom/sigmob/sdk/base/common/f;->i:Ljava/util/Map;

    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    sput-object v0, Lcom/sigmob/sdk/base/common/f;->k:Ljava/util/HashMap;

    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    sput-object v0, Lcom/sigmob/sdk/base/common/f;->v:Ljava/util/Map;

    return-void
.end method

.method private constructor <init>()V
    .locals 1

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    iput-object v0, p0, Lcom/sigmob/sdk/base/common/f;->m:Ljava/util/Map;

    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    iput-object v0, p0, Lcom/sigmob/sdk/base/common/f;->n:Ljava/util/HashMap;

    new-instance v0, Ljava/util/HashSet;

    invoke-direct {v0}, Ljava/util/HashSet;-><init>()V

    iput-object v0, p0, Lcom/sigmob/sdk/base/common/f;->o:Ljava/util/HashSet;

    new-instance v0, Lcom/sigmob/sdk/base/common/f$1;

    invoke-direct {v0, p0}, Lcom/sigmob/sdk/base/common/f$1;-><init>(Lcom/sigmob/sdk/base/common/f;)V

    iput-object v0, p0, Lcom/sigmob/sdk/base/common/f;->a:Lcom/czhj/volley/toolbox/FileDownloadRequest$FileDownloadListener;

    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/sigmob/sdk/base/common/f;->p:Ljava/util/ArrayList;

    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    iput-object v0, p0, Lcom/sigmob/sdk/base/common/f;->q:Ljava/util/HashMap;

    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    iput-object v0, p0, Lcom/sigmob/sdk/base/common/f;->t:Ljava/util/HashMap;

    return-void
.end method

.method public static declared-synchronized a()Lcom/czhj/sdk/common/utils/ImageManager;
    .locals 5

    const-class v0, Lcom/sigmob/sdk/base/common/f;

    monitor-enter v0

    :try_start_0
    sget-object v1, Lcom/sigmob/sdk/base/common/f;->l:Lcom/czhj/sdk/common/utils/ImageManager;

    if-nez v1, :cond_1

    new-instance v1, Ljava/io/File;

    invoke-static {}, Lcom/sigmob/sdk/base/utils/b;->e()Ljava/lang/String;

    move-result-object v2

    invoke-direct {v1, v2}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    const-class v2, Lcom/czhj/sdk/common/utils/ImageManager;

    monitor-enter v2
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    :try_start_1
    sget-object v3, Lcom/sigmob/sdk/base/common/f;->l:Lcom/czhj/sdk/common/utils/ImageManager;

    if-nez v3, :cond_0

    new-instance v3, Lcom/czhj/sdk/common/utils/ImageManager;

    invoke-static {}, Lcom/sigmob/sdk/b;->b()Landroid/content/Context;

    move-result-object v4

    invoke-direct {v3, v4}, Lcom/czhj/sdk/common/utils/ImageManager;-><init>(Landroid/content/Context;)V

    invoke-virtual {v3, v1}, Lcom/czhj/sdk/common/utils/ImageManager;->customCachePath(Ljava/io/File;)Lcom/czhj/sdk/common/utils/ImageManager;

    move-result-object v1

    sput-object v1, Lcom/sigmob/sdk/base/common/f;->l:Lcom/czhj/sdk/common/utils/ImageManager;

    :cond_0
    monitor-exit v2

    goto :goto_0

    :catchall_0
    move-exception v1

    monitor-exit v2
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    :try_start_2
    throw v1

    :cond_1
    :goto_0
    sget-object v1, Lcom/sigmob/sdk/base/common/f;->l:Lcom/czhj/sdk/common/utils/ImageManager;
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    monitor-exit v0

    return-object v1

    :catchall_1
    move-exception v1

    monitor-exit v0

    throw v1
.end method

.method public static a(Ljava/lang/String;)Lcom/sigmob/sdk/base/models/BaseAdUnit;
    .locals 1

    sget-object v0, Lcom/sigmob/sdk/base/common/f;->i:Ljava/util/Map;

    invoke-interface {v0, p0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Lcom/sigmob/sdk/base/models/BaseAdUnit;

    return-object p0
.end method

.method static synthetic a(Lcom/sigmob/sdk/base/common/f;)Ljava/util/HashSet;
    .locals 0

    iget-object p0, p0, Lcom/sigmob/sdk/base/common/f;->o:Ljava/util/HashSet;

    return-object p0
.end method

.method private a(Lcom/czhj/volley/toolbox/DownloadItem;Lcom/sigmob/sdk/base/models/BaseAdUnit;)V
    .locals 3

    sget-object p2, Lcom/sigmob/sdk/base/common/f;->j:Lcom/sigmob/sdk/videocache/h;

    if-eqz p2, :cond_0

    iget-object p2, p1, Lcom/czhj/volley/toolbox/DownloadItem;->url:Ljava/lang/String;

    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    sget-object v0, Lcom/sigmob/sdk/base/common/f;->j:Lcom/sigmob/sdk/videocache/h;

    invoke-virtual {v0, p2}, Lcom/sigmob/sdk/videocache/h;->b(Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_0

    sget-object v0, Lcom/sigmob/sdk/base/common/f;->j:Lcom/sigmob/sdk/videocache/h;

    invoke-virtual {v0, p2}, Lcom/sigmob/sdk/videocache/h;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    sget-object v1, Lcom/sigmob/sdk/base/common/f;->j:Lcom/sigmob/sdk/videocache/h;

    new-instance v2, Lcom/sigmob/sdk/base/common/f$2;

    invoke-direct {v2, p0, p1}, Lcom/sigmob/sdk/base/common/f$2;-><init>(Lcom/sigmob/sdk/base/common/f;Lcom/czhj/volley/toolbox/DownloadItem;)V

    invoke-virtual {v1, v2, p2}, Lcom/sigmob/sdk/videocache/h;->a(Lcom/sigmob/sdk/videocache/d;Ljava/lang/String;)V

    invoke-static {}, Lcom/sigmob/sdk/b;->b()Landroid/content/Context;

    move-result-object p1

    invoke-static {p1}, Lcom/sigmob/sdk/videocache/v;->a(Landroid/content/Context;)Lcom/sigmob/sdk/videocache/v;

    move-result-object p1

    invoke-virtual {p1, v0}, Lcom/sigmob/sdk/videocache/v;->a(Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method static synthetic a(Lcom/sigmob/sdk/base/common/f;Lcom/czhj/volley/toolbox/DownloadItem;Lcom/sigmob/sdk/base/models/BaseAdUnit;)V
    .locals 0

    invoke-direct {p0, p1, p2}, Lcom/sigmob/sdk/base/common/f;->a(Lcom/czhj/volley/toolbox/DownloadItem;Lcom/sigmob/sdk/base/models/BaseAdUnit;)V

    return-void
.end method

.method static synthetic a(Lcom/sigmob/sdk/base/common/f;Lcom/sigmob/sdk/base/models/BaseAdUnit;Ljava/lang/String;Lcom/sigmob/sdk/base/common/f$b;)V
    .locals 0

    invoke-direct {p0, p1, p2, p3}, Lcom/sigmob/sdk/base/common/f;->a(Lcom/sigmob/sdk/base/models/BaseAdUnit;Ljava/lang/String;Lcom/sigmob/sdk/base/common/f$b;)V

    return-void
.end method

.method public static a(Lcom/sigmob/sdk/base/models/BaseAdUnit;)V
    .locals 0

    invoke-static {p0}, Lcom/sigmob/sdk/base/common/f;->b(Lcom/sigmob/sdk/base/models/BaseAdUnit;)V

    return-void
.end method

.method private a(Lcom/sigmob/sdk/base/models/BaseAdUnit;Ljava/lang/String;Lcom/sigmob/sdk/base/common/f$b;)V
    .locals 0

    if-nez p2, :cond_2

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->isVideoExist()Z

    move-result p2

    if-eqz p2, :cond_1

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->isEndCardIndexExist()Z

    move-result p2

    if-nez p2, :cond_0

    goto :goto_0

    :cond_0
    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getPlayMode()I

    move-result p2

    if-nez p2, :cond_3

    if-eqz p3, :cond_3

    const/4 p2, 0x0

    goto :goto_1

    :cond_1
    :goto_0
    return-void

    :cond_2
    if-eqz p3, :cond_3

    :goto_1
    invoke-interface {p3, p1, p2}, Lcom/sigmob/sdk/base/common/f$b;->a(Lcom/sigmob/sdk/base/models/BaseAdUnit;Ljava/lang/String;)V

    :cond_3
    iget-object p2, p0, Lcom/sigmob/sdk/base/common/f;->p:Ljava/util/ArrayList;

    invoke-virtual {p2, p1}, Ljava/util/ArrayList;->remove(Ljava/lang/Object;)Z

    iget-object p2, p0, Lcom/sigmob/sdk/base/common/f;->t:Ljava/util/HashMap;

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getUuid()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p2, p1}, Ljava/util/HashMap;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    return-void
.end method

.method public static a(Ljava/util/List;)V
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/sigmob/sdk/base/models/BaseAdUnit;",
            ">;)V"
        }
    .end annotation

    if-eqz p0, :cond_0

    invoke-interface {p0}, Ljava/util/List;->size()I

    move-result v0

    if-lez v0, :cond_0

    sget-object v0, Lcom/sigmob/sdk/base/common/f;->v:Ljava/util/Map;

    const/4 v1, 0x0

    invoke-interface {p0, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {v1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getUuid()Ljava/lang/String;

    move-result-object v1

    invoke-interface {v0, v1, p0}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    :cond_0
    return-void
.end method

.method public static a([Ljava/io/File;JJ)[Ljava/io/File;
    .locals 8

    if-eqz p0, :cond_3

    array-length v0, p0

    if-nez v0, :cond_0

    goto :goto_1

    :cond_0
    new-instance v0, Ljava/util/ArrayList;

    invoke-static {p0}, Ljava/util/Arrays;->asList([Ljava/lang/Object;)Ljava/util/List;

    move-result-object v1

    invoke-direct {v0, v1}, Ljava/util/ArrayList;-><init>(Ljava/util/Collection;)V

    const/4 v1, 0x0

    move v2, v1

    :goto_0
    array-length v3, p0

    if-ge v2, v3, :cond_2

    aget-object v3, p0, v2

    sub-long v4, p1, p3

    invoke-virtual {v3}, Ljava/io/File;->exists()Z

    move-result v6

    if-eqz v6, :cond_1

    invoke-virtual {v3}, Ljava/io/File;->lastModified()J

    move-result-wide v6

    cmp-long v4, v4, v6

    if-lez v4, :cond_1

    invoke-virtual {v3}, Ljava/io/File;->delete()Z

    invoke-virtual {v0, v3}, Ljava/util/ArrayList;->remove(Ljava/lang/Object;)Z

    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "file delete "

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/io/File;->getName()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v3}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    :cond_1
    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    :cond_2
    new-array p0, v1, [Ljava/io/File;

    invoke-virtual {v0, p0}, Ljava/util/ArrayList;->toArray([Ljava/lang/Object;)[Ljava/lang/Object;

    move-result-object p0

    check-cast p0, [Ljava/io/File;

    return-object p0

    :cond_3
    :goto_1
    const/4 p0, 0x0

    return-object p0
.end method

.method public static b(Ljava/lang/String;)Ljava/util/List;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            ")",
            "Ljava/util/List<",
            "Lcom/sigmob/sdk/base/models/BaseAdUnit;",
            ">;"
        }
    .end annotation

    sget-object v0, Lcom/sigmob/sdk/base/common/f;->v:Ljava/util/Map;

    invoke-interface {v0, p0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Ljava/util/List;

    return-object p0
.end method

.method static synthetic b(Lcom/sigmob/sdk/base/common/f;)Ljava/util/Map;
    .locals 0

    iget-object p0, p0, Lcom/sigmob/sdk/base/common/f;->m:Ljava/util/Map;

    return-object p0
.end method

.method public static b()V
    .locals 1

    :try_start_0
    sget-object v0, Lcom/sigmob/sdk/base/utils/b;->a:Ljava/lang/String;

    invoke-static {v0}, Lcom/sigmob/sdk/base/utils/b;->b(Ljava/lang/String;)Ljava/io/File;

    move-result-object v0

    invoke-virtual {v0}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/czhj/sdk/common/utils/FileUtil;->deleteDirectory(Ljava/lang/String;)Z

    invoke-static {}, Lcom/sigmob/sdk/base/common/f;->q()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v0

    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;)V

    :goto_0
    return-void
.end method

.method public static b(Lcom/sigmob/sdk/base/models/BaseAdUnit;)V
    .locals 2

    if-eqz p0, :cond_0

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getUuid()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    sget-object v0, Lcom/sigmob/sdk/base/common/f;->i:Ljava/util/Map;

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getUuid()Ljava/lang/String;

    move-result-object v1

    invoke-interface {v0, v1, p0}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    :cond_0
    return-void
.end method

.method private b(Lcom/sigmob/sdk/base/models/BaseAdUnit;Lcom/sigmob/sdk/base/common/f$b;)V
    .locals 3

    if-eqz p1, :cond_2

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getAdPrivacyTemplateFile()Ljava/io/File;

    move-result-object v0

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Ljava/io/File;->exists()Z

    move-result v1

    if-nez v1, :cond_0

    new-instance v1, Lcom/czhj/volley/toolbox/DownloadItem;

    invoke-direct {v1}, Lcom/czhj/volley/toolbox/DownloadItem;-><init>()V

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getadPrivacy()Lcom/sigmob/sdk/base/models/rtb/AdPrivacy;

    move-result-object v2

    iget-object v2, v2, Lcom/sigmob/sdk/base/models/rtb/AdPrivacy;->privacy_template_url:Ljava/lang/String;

    iput-object v2, v1, Lcom/czhj/volley/toolbox/DownloadItem;->url:Ljava/lang/String;

    invoke-virtual {v0}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object v0

    iput-object v0, v1, Lcom/czhj/volley/toolbox/DownloadItem;->filePath:Ljava/lang/String;

    sget-object v0, Lcom/czhj/volley/toolbox/DownloadItem$FileType;->OTHER:Lcom/czhj/volley/toolbox/DownloadItem$FileType;

    iput-object v0, v1, Lcom/czhj/volley/toolbox/DownloadItem;->type:Lcom/czhj/volley/toolbox/DownloadItem$FileType;

    invoke-static {}, Lcom/sigmob/sdk/base/common/p;->a()Lcom/czhj/volley/toolbox/FileDownloader;

    move-result-object v0

    if-eqz v0, :cond_0

    new-instance v2, Lcom/sigmob/sdk/base/common/f$3;

    invoke-direct {v2, p0}, Lcom/sigmob/sdk/base/common/f$3;-><init>(Lcom/sigmob/sdk/base/common/f;)V

    invoke-virtual {v0, v1, v2}, Lcom/czhj/volley/toolbox/FileDownloader;->add(Lcom/czhj/volley/toolbox/DownloadItem;Lcom/czhj/volley/toolbox/FileDownloadRequest$FileDownloadListener;)Lcom/czhj/volley/toolbox/FileDownloader$DownloadController;

    :cond_0
    new-instance v0, Ljava/io/File;

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getSplashFilePath()Ljava/lang/String;

    move-result-object v1

    invoke-direct {v0, v1}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0}, Ljava/io/File;->exists()Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v1

    invoke-virtual {v0, v1, v2}, Ljava/io/File;->setLastModified(J)Z

    if-eqz p2, :cond_2

    const/4 v0, 0x0

    invoke-interface {p2, p1, v0}, Lcom/sigmob/sdk/base/common/f$b;->a(Lcom/sigmob/sdk/base/models/BaseAdUnit;Ljava/lang/String;)V

    goto :goto_0

    :cond_1
    invoke-static {}, Lcom/sigmob/sdk/base/common/p;->a()Lcom/czhj/volley/toolbox/FileDownloader;

    move-result-object v0

    new-instance v1, Lcom/czhj/volley/toolbox/DownloadItem;

    invoke-direct {v1}, Lcom/czhj/volley/toolbox/DownloadItem;-><init>()V

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getSplashFilePath()Ljava/lang/String;

    move-result-object v2

    iput-object v2, v1, Lcom/czhj/volley/toolbox/DownloadItem;->filePath:Ljava/lang/String;

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getSplashURL()Ljava/lang/String;

    move-result-object v2

    iput-object v2, v1, Lcom/czhj/volley/toolbox/DownloadItem;->url:Ljava/lang/String;

    sget-object v2, Lcom/czhj/volley/toolbox/DownloadItem$FileType;->OTHER:Lcom/czhj/volley/toolbox/DownloadItem$FileType;

    iput-object v2, v1, Lcom/czhj/volley/toolbox/DownloadItem;->type:Lcom/czhj/volley/toolbox/DownloadItem$FileType;

    const/4 v2, 0x0

    iput-boolean v2, v1, Lcom/czhj/volley/toolbox/DownloadItem;->userRange:Z

    new-instance v2, Lcom/sigmob/sdk/base/common/f$4;

    invoke-direct {v2, p0, p2, p1}, Lcom/sigmob/sdk/base/common/f$4;-><init>(Lcom/sigmob/sdk/base/common/f;Lcom/sigmob/sdk/base/common/f$b;Lcom/sigmob/sdk/base/models/BaseAdUnit;)V

    invoke-virtual {v0, v1, v2}, Lcom/czhj/volley/toolbox/FileDownloader;->add(Lcom/czhj/volley/toolbox/DownloadItem;Lcom/czhj/volley/toolbox/FileDownloadRequest$FileDownloadListener;)Lcom/czhj/volley/toolbox/FileDownloader$DownloadController;

    :cond_2
    :goto_0
    return-void
.end method

.method public static c()Lcom/sigmob/sdk/videocache/h;
    .locals 1

    sget-object v0, Lcom/sigmob/sdk/base/common/f;->j:Lcom/sigmob/sdk/videocache/h;

    return-object v0
.end method

.method static synthetic c(Lcom/sigmob/sdk/base/common/f;)Ljava/util/ArrayList;
    .locals 0

    iget-object p0, p0, Lcom/sigmob/sdk/base/common/f;->p:Ljava/util/ArrayList;

    return-object p0
.end method

.method public static c(Lcom/sigmob/sdk/base/models/BaseAdUnit;)V
    .locals 2

    if-eqz p0, :cond_0

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getUuid()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    sget-object v0, Lcom/sigmob/sdk/base/common/f;->i:Ljava/util/Map;

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getUuid()Ljava/lang/String;

    move-result-object v1

    invoke-interface {v0, v1}, Ljava/util/Map;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    sget-object v0, Lcom/sigmob/sdk/base/common/f;->v:Ljava/util/Map;

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getUuid()Ljava/lang/String;

    move-result-object p0

    invoke-interface {v0, p0}, Ljava/util/Map;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    :cond_0
    return-void
.end method

.method static synthetic d(Lcom/sigmob/sdk/base/common/f;)Ljava/util/HashMap;
    .locals 0

    iget-object p0, p0, Lcom/sigmob/sdk/base/common/f;->t:Ljava/util/HashMap;

    return-object p0
.end method

.method public static d()V
    .locals 3

    new-instance v0, Lcom/sigmob/sdk/videocache/h$a;

    invoke-static {}, Lcom/sigmob/sdk/b;->b()Landroid/content/Context;

    move-result-object v1

    invoke-direct {v0, v1}, Lcom/sigmob/sdk/videocache/h$a;-><init>(Landroid/content/Context;)V

    :try_start_0
    new-instance v1, Ljava/io/File;

    invoke-static {}, Lcom/sigmob/sdk/base/utils/b;->b()Ljava/lang/String;

    move-result-object v2

    invoke-direct {v1, v2}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/videocache/h$a;->a(Ljava/io/File;)Lcom/sigmob/sdk/videocache/h$a;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v1

    const-string v2, "initHttpProxyCacheServer fail "

    invoke-static {v2, v1}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;Ljava/lang/Throwable;)V

    :goto_0
    invoke-virtual {v0}, Lcom/sigmob/sdk/videocache/h$a;->a()Lcom/sigmob/sdk/videocache/h;

    move-result-object v0

    sput-object v0, Lcom/sigmob/sdk/base/common/f;->j:Lcom/sigmob/sdk/videocache/h;

    return-void
.end method

.method public static e()Lcom/sigmob/sdk/base/common/f;
    .locals 2

    sget-object v0, Lcom/sigmob/sdk/base/common/f;->h:Lcom/sigmob/sdk/base/common/f;

    if-nez v0, :cond_1

    const-class v0, Lcom/sigmob/sdk/base/common/f;

    monitor-enter v0

    :try_start_0
    sget-object v1, Lcom/sigmob/sdk/base/common/f;->h:Lcom/sigmob/sdk/base/common/f;

    if-nez v1, :cond_0

    new-instance v1, Lcom/sigmob/sdk/base/common/f;

    invoke-direct {v1}, Lcom/sigmob/sdk/base/common/f;-><init>()V

    sput-object v1, Lcom/sigmob/sdk/base/common/f;->h:Lcom/sigmob/sdk/base/common/f;

    :cond_0
    monitor-exit v0

    goto :goto_0

    :catchall_0
    move-exception v1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1

    :cond_1
    :goto_0
    sget-object v0, Lcom/sigmob/sdk/base/common/f;->h:Lcom/sigmob/sdk/base/common/f;

    return-object v0
.end method

.method private f(Ljava/lang/String;)Ljava/lang/String;
    .locals 2

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    return-object v1

    :cond_0
    invoke-static {}, Lcom/sigmob/sdk/base/common/f;->c()Lcom/sigmob/sdk/videocache/h;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/sigmob/sdk/videocache/h;->c(Ljava/lang/String;)Ljava/io/File;

    move-result-object p1

    if-eqz p1, :cond_1

    invoke-virtual {p1}, Ljava/io/File;->exists()Z

    move-result v0

    if-eqz v0, :cond_1

    invoke-virtual {p1}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object p1

    return-object p1

    :cond_1
    return-object v1
.end method

.method public static f()V
    .locals 5

    :try_start_0
    invoke-static {}, Lcom/sigmob/sdk/base/utils/b;->d()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/czhj/sdk/common/utils/FileUtil;->orderByDate(Ljava/lang/String;)[Ljava/io/File;

    move-result-object v0

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v1

    invoke-static {}, Lcom/sigmob/sdk/base/i;->a()Lcom/sigmob/sdk/base/i;

    move-result-object v3

    invoke-virtual {v3}, Lcom/sigmob/sdk/base/i;->s()J

    move-result-wide v3

    invoke-static {v0, v1, v2, v3, v4}, Lcom/sigmob/sdk/base/common/f;->a([Ljava/io/File;JJ)[Ljava/io/File;

    move-result-object v0

    invoke-static {}, Lcom/sigmob/sdk/base/i;->a()Lcom/sigmob/sdk/base/i;

    move-result-object v1

    invoke-virtual {v1}, Lcom/sigmob/sdk/base/i;->r()I

    move-result v1

    invoke-static {v0, v1}, Lcom/czhj/sdk/common/utils/FileUtil;->clearCacheFileByCount([Ljava/io/File;I)[Ljava/io/File;

    move-result-object v0

    if-nez v0, :cond_0

    const-string v0, "splash ad file list is null"

    :goto_0
    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->i(Ljava/lang/String;)V

    goto :goto_1

    :cond_0
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "splash ad file remain num: "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    array-length v0, v0

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v0

    const-string v1, "clean splash ad file error"

    invoke-static {v1, v0}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;Ljava/lang/Throwable;)V

    :goto_1
    return-void
.end method

.method public static g()V
    .locals 3

    :try_start_0
    invoke-static {}, Lcom/sigmob/sdk/base/utils/b;->b()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/czhj/sdk/common/utils/FileUtil;->orderByDate(Ljava/lang/String;)[Ljava/io/File;

    move-result-object v0

    invoke-static {}, Lcom/sigmob/sdk/base/i;->a()Lcom/sigmob/sdk/base/i;

    move-result-object v1

    invoke-virtual {v1}, Lcom/sigmob/sdk/base/i;->o()I

    move-result v1

    invoke-static {}, Lcom/sigmob/sdk/base/i;->a()Lcom/sigmob/sdk/base/i;

    move-result-object v2

    invoke-virtual {v2}, Lcom/sigmob/sdk/base/i;->t()I

    move-result v2

    add-int/2addr v1, v2

    invoke-static {v0, v1}, Lcom/czhj/sdk/common/utils/FileUtil;->clearCacheFileByCount([Ljava/io/File;I)[Ljava/io/File;

    move-result-object v0

    if-nez v0, :cond_0

    const-string v0, "splash ad file list is null"

    :goto_0
    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->i(Ljava/lang/String;)V

    goto :goto_1

    :cond_0
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "splash ad file remain num: "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    array-length v0, v0

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v0

    const-string v1, "clean splash ad file error"

    invoke-static {v1, v0}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;Ljava/lang/Throwable;)V

    :goto_1
    return-void
.end method

.method public static h()V
    .locals 3

    :try_start_0
    invoke-static {}, Lcom/sigmob/sdk/base/utils/b;->e()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/czhj/sdk/common/utils/FileUtil;->orderByDate(Ljava/lang/String;)[Ljava/io/File;

    move-result-object v0

    invoke-static {}, Lcom/sigmob/sdk/base/i;->a()Lcom/sigmob/sdk/base/i;

    move-result-object v1

    invoke-virtual {v1}, Lcom/sigmob/sdk/base/i;->t()I

    move-result v1

    invoke-static {v0, v1}, Lcom/czhj/sdk/common/utils/FileUtil;->clearCacheFileByCount([Ljava/io/File;I)[Ljava/io/File;

    move-result-object v0

    if-nez v0, :cond_0

    const-string v0, "native ad file list is null"

    :goto_0
    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->i(Ljava/lang/String;)V

    goto :goto_1

    :cond_0
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "native ad file remain num: "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    array-length v0, v0

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v0

    const-string v1, "clean native ad file error"

    invoke-static {v1, v0}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;Ljava/lang/Throwable;)V

    :goto_1
    return-void
.end method

.method public static i()V
    .locals 7

    :try_start_0
    invoke-static {}, Lcom/sigmob/sdk/b;->b()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/sigmob/sdk/base/utils/b;->a(Landroid/content/Context;)Ljava/io/File;

    move-result-object v0

    invoke-virtual {v0}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/czhj/sdk/common/utils/FileUtil;->orderByDate(Ljava/lang/String;)[Ljava/io/File;

    move-result-object v0

    const/4 v1, 0x5

    invoke-static {v0, v1}, Lcom/czhj/sdk/common/utils/FileUtil;->clearCacheFileByCount([Ljava/io/File;I)[Ljava/io/File;

    move-result-object v0

    if-nez v0, :cond_0

    const-string v1, "Download APK files  is null"

    :goto_0
    invoke-static {v1}, Lcom/czhj/sdk/logger/SigmobLog;->i(Ljava/lang/String;)V

    goto :goto_1

    :cond_0
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "Download APK files remain num: "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    array-length v2, v0

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    goto :goto_0

    :goto_1
    if-eqz v0, :cond_2

    array-length v1, v0

    if-lez v1, :cond_2

    const/4 v1, 0x0

    :goto_2
    array-length v2, v0

    if-ge v1, v2, :cond_2

    aget-object v2, v0, v1

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v3

    invoke-virtual {v2}, Ljava/io/File;->lastModified()J

    move-result-wide v5

    sub-long/2addr v3, v5

    const-wide/32 v5, 0x240c8400

    cmp-long v3, v3, v5

    if-lez v3, :cond_1

    invoke-virtual {v2}, Ljava/io/File;->delete()Z

    move-result v3

    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "Download APK files timeOut seven day and delete:"

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/io/File;->getName()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, ":"

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Lcom/czhj/sdk/logger/SigmobLog;->i(Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :cond_1
    add-int/lit8 v1, v1, 0x1

    goto :goto_2

    :catchall_0
    move-exception v0

    const-string v1, "clean Download APK file error"

    invoke-static {v1, v0}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;Ljava/lang/Throwable;)V

    :cond_2
    return-void
.end method

.method public static j()V
    .locals 7

    :try_start_0
    invoke-static {}, Lcom/sigmob/sdk/base/utils/b;->a()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/czhj/sdk/common/utils/FileUtil;->orderByDate(Ljava/lang/String;)[Ljava/io/File;

    move-result-object v0

    new-instance v1, Ljava/util/ArrayList;

    invoke-static {v0}, Ljava/util/Arrays;->asList([Ljava/lang/Object;)Ljava/util/List;

    move-result-object v2

    invoke-direct {v1, v2}, Ljava/util/ArrayList;-><init>(Ljava/util/Collection;)V

    const/4 v2, 0x0

    move v3, v2

    :goto_0
    array-length v4, v0

    if-ge v3, v4, :cond_1

    aget-object v4, v0, v3

    invoke-virtual {v4}, Ljava/io/File;->getPath()Ljava/lang/String;

    move-result-object v5

    const-string v6, ".mp4"

    invoke-virtual {v5, v6}, Ljava/lang/String;->endsWith(Ljava/lang/String;)Z

    move-result v5

    if-nez v5, :cond_0

    invoke-virtual {v4}, Ljava/io/File;->getPath()Ljava/lang/String;

    move-result-object v5

    const-string v6, ".mp4.tmp"

    invoke-virtual {v5, v6}, Ljava/lang/String;->endsWith(Ljava/lang/String;)Z

    move-result v5

    if-nez v5, :cond_0

    invoke-virtual {v4}, Ljava/io/File;->getPath()Ljava/lang/String;

    move-result-object v5

    const-string v6, ".tgz"

    invoke-virtual {v5, v6}, Ljava/lang/String;->endsWith(Ljava/lang/String;)Z

    move-result v5

    if-nez v5, :cond_0

    invoke-virtual {v4}, Ljava/io/File;->getPath()Ljava/lang/String;

    move-result-object v5

    const-string v6, ".html"

    invoke-virtual {v5, v6}, Ljava/lang/String;->endsWith(Ljava/lang/String;)Z

    move-result v5

    if-nez v5, :cond_0

    invoke-virtual {v1, v4}, Ljava/util/ArrayList;->remove(Ljava/lang/Object;)Z

    :cond_0
    add-int/lit8 v3, v3, 0x1

    goto :goto_0

    :cond_1
    new-array v0, v2, [Ljava/io/File;

    invoke-virtual {v1, v0}, Ljava/util/ArrayList;->toArray([Ljava/lang/Object;)[Ljava/lang/Object;

    move-result-object v0

    check-cast v0, [Ljava/io/File;

    const/4 v1, 0x5

    invoke-static {v0, v1}, Lcom/czhj/sdk/common/utils/FileUtil;->clearCacheFileByCount([Ljava/io/File;I)[Ljava/io/File;

    move-result-object v0

    if-nez v0, :cond_2

    const-string v0, "splash ad file list is null"

    :goto_1
    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->i(Ljava/lang/String;)V

    goto :goto_2

    :cond_2
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "splash ad file remain num: "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    array-length v0, v0

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_1

    :catchall_0
    move-exception v0

    const-string v1, "clean splash ad file error"

    invoke-static {v1, v0}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;Ljava/lang/Throwable;)V

    :goto_2
    return-void
.end method

.method static synthetic m()Ljava/lang/Integer;
    .locals 1

    sget-object v0, Lcom/sigmob/sdk/base/common/f;->e:Ljava/lang/Integer;

    return-object v0
.end method

.method static synthetic n()Ljava/util/HashMap;
    .locals 1

    sget-object v0, Lcom/sigmob/sdk/base/common/f;->k:Ljava/util/HashMap;

    return-object v0
.end method

.method static synthetic o()Lcom/sigmob/sdk/videocache/h;
    .locals 1

    sget-object v0, Lcom/sigmob/sdk/base/common/f;->j:Lcom/sigmob/sdk/videocache/h;

    return-object v0
.end method

.method static synthetic p()Ljava/lang/Integer;
    .locals 1

    sget-object v0, Lcom/sigmob/sdk/base/common/f;->c:Ljava/lang/Integer;

    return-object v0
.end method

.method private static q()V
    .locals 7

    :try_start_0
    sget-object v0, Lcom/sigmob/sdk/base/utils/b;->c:Ljava/lang/String;

    invoke-static {v0}, Lcom/sigmob/sdk/base/utils/b;->c(Ljava/lang/String;)Ljava/io/File;

    move-result-object v0

    invoke-virtual {v0}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/czhj/sdk/common/utils/FileUtil;->orderByDate(Ljava/lang/String;)[Ljava/io/File;

    move-result-object v0

    const/4 v1, 0x0

    :goto_0
    array-length v2, v0

    if-ge v1, v2, :cond_2

    aget-object v2, v0, v1

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v3

    invoke-static {}, Lcom/sigmob/sdk/base/i;->a()Lcom/sigmob/sdk/base/i;

    move-result-object v5

    invoke-virtual {v5}, Lcom/sigmob/sdk/base/i;->s()J

    move-result-wide v5

    sub-long/2addr v3, v5

    invoke-virtual {v2}, Ljava/io/File;->exists()Z

    move-result v5

    if-eqz v5, :cond_1

    invoke-virtual {v2}, Ljava/io/File;->lastModified()J

    move-result-wide v5

    cmp-long v3, v3, v5

    if-lez v3, :cond_1

    invoke-virtual {v2}, Ljava/io/File;->isFile()Z

    move-result v3

    if-eqz v3, :cond_0

    invoke-virtual {v2}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Lcom/czhj/sdk/common/utils/FileUtil;->deleteFile(Ljava/lang/String;)Z

    move-result v2

    if-nez v2, :cond_1

    goto :goto_1

    :cond_0
    invoke-virtual {v2}, Ljava/io/File;->isDirectory()Z

    move-result v3

    if-eqz v3, :cond_1

    invoke-virtual {v2}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Lcom/czhj/sdk/common/utils/FileUtil;->deleteDirectory(Ljava/lang/String;)Z

    move-result v2
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-nez v2, :cond_1

    goto :goto_1

    :cond_1
    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    :catchall_0
    move-exception v0

    invoke-virtual {v0}, Ljava/lang/Throwable;->printStackTrace()V

    :cond_2
    :goto_1
    return-void
.end method


# virtual methods
.method public a(I)Ljava/util/Map;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(I)",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Lcom/czhj/sdk/common/models/AdCache;",
            ">;"
        }
    .end annotation

    const/4 v0, 0x1

    if-eq p1, v0, :cond_1

    const/4 v0, 0x4

    if-eq p1, v0, :cond_1

    const/4 v0, 0x5

    if-eq p1, v0, :cond_0

    const/4 p1, 0x0

    return-object p1

    :cond_0
    iget-object p1, p0, Lcom/sigmob/sdk/base/common/f;->u:Ljava/util/HashMap;

    return-object p1

    :cond_1
    iget-object p1, p0, Lcom/sigmob/sdk/base/common/f;->q:Ljava/util/HashMap;

    return-object p1
.end method

.method public a(Lcom/sigmob/sdk/base/common/f$a;)V
    .locals 1

    if-eqz p1, :cond_0

    iget-object v0, p0, Lcom/sigmob/sdk/base/common/f;->o:Ljava/util/HashSet;

    invoke-virtual {v0, p1}, Ljava/util/HashSet;->contains(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/sigmob/sdk/base/common/f;->o:Ljava/util/HashSet;

    invoke-virtual {v0, p1}, Ljava/util/HashSet;->add(Ljava/lang/Object;)Z

    :cond_0
    return-void
.end method

.method public a(Lcom/sigmob/sdk/base/models/BaseAdUnit;Lcom/sigmob/sdk/base/common/f$b;)V
    .locals 3

    if-eqz p2, :cond_0

    invoke-interface {p2, p1}, Lcom/sigmob/sdk/base/common/f$b;->a(Lcom/sigmob/sdk/base/models/BaseAdUnit;)V

    :cond_0
    if-nez p1, :cond_2

    const-string v0, "adUnit is null"

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;)V

    if-eqz p2, :cond_1

    invoke-interface {p2, p1, v0}, Lcom/sigmob/sdk/base/common/f$b;->a(Lcom/sigmob/sdk/base/models/BaseAdUnit;Ljava/lang/String;)V

    :cond_1
    return-void

    :cond_2
    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getAd_type()I

    move-result v0

    const/4 v1, 0x2

    if-ne v0, v1, :cond_3

    invoke-direct {p0, p1, p2}, Lcom/sigmob/sdk/base/common/f;->b(Lcom/sigmob/sdk/base/models/BaseAdUnit;Lcom/sigmob/sdk/base/common/f$b;)V

    goto :goto_0

    :cond_3
    if-eqz p2, :cond_4

    iget-object v0, p0, Lcom/sigmob/sdk/base/common/f;->t:Ljava/util/HashMap;

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getUuid()Ljava/lang/String;

    move-result-object v1

    new-instance v2, Ljava/lang/ref/WeakReference;

    invoke-direct {v2, p2}, Ljava/lang/ref/WeakReference;-><init>(Ljava/lang/Object;)V

    invoke-virtual {v0, v1, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    :cond_4
    :try_start_0
    new-instance p2, Lcom/sigmob/sdk/base/common/f$d;

    invoke-direct {p2, p0, p1}, Lcom/sigmob/sdk/base/common/f$d;-><init>(Lcom/sigmob/sdk/base/common/f;Lcom/sigmob/sdk/base/models/BaseAdUnit;)V

    invoke-static {}, Lcom/czhj/sdk/common/ThreadPool/ThreadPoolFactory$BackgroundThreadPool;->getInstance()Lcom/czhj/sdk/common/ThreadPool/ThreadPoolFactory$BackgroundThreadPool;

    move-result-object p1

    invoke-virtual {p1}, Lcom/czhj/sdk/common/ThreadPool/ThreadPoolFactory$BackgroundThreadPool;->getExecutorService()Ljava/util/concurrent/ExecutorService;

    move-result-object p1

    const/4 v0, 0x0

    new-array v0, v0, [Ljava/lang/Object;

    invoke-virtual {p2, p1, v0}, Lcom/sigmob/sdk/base/common/f$d;->executeOnExecutor(Ljava/util/concurrent/Executor;[Ljava/lang/Object;)Landroid/os/AsyncTask;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    const-string p2, "AdUnitCheckCacheTask execute error"

    invoke-static {p2, p1}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;Ljava/lang/Throwable;)V

    :goto_0
    return-void
.end method

.method public a(Ljava/lang/String;I)V
    .locals 1

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    return-void

    :cond_0
    invoke-virtual {p0, p2}, Lcom/sigmob/sdk/base/common/f;->a(I)Ljava/util/Map;

    move-result-object p2

    if-eqz p2, :cond_1

    invoke-interface {p2, p1}, Ljava/util/Map;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    :cond_1
    return-void
.end method

.method public b(Lcom/sigmob/sdk/base/common/f$a;)V
    .locals 1

    if-eqz p1, :cond_0

    iget-object v0, p0, Lcom/sigmob/sdk/base/common/f;->o:Ljava/util/HashSet;

    invoke-virtual {v0, p1}, Ljava/util/HashSet;->contains(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/sigmob/sdk/base/common/f;->o:Ljava/util/HashSet;

    invoke-virtual {v0, p1}, Ljava/util/HashSet;->remove(Ljava/lang/Object;)Z

    :cond_0
    return-void
.end method

.method public c(Ljava/lang/String;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/common/f;->r:Ljava/lang/String;

    return-void
.end method

.method public d(Lcom/sigmob/sdk/base/models/BaseAdUnit;)V
    .locals 4

    if-eqz p1, :cond_2

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getadslot_id()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    goto :goto_0

    :cond_0
    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getAd_type()I

    move-result v0

    invoke-virtual {p0, v0}, Lcom/sigmob/sdk/base/common/f;->a(I)Ljava/util/Map;

    move-result-object v0

    if-eqz v0, :cond_2

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getadslot_id()Ljava/lang/String;

    move-result-object v1

    invoke-interface {v0, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/czhj/sdk/common/models/AdCache;

    if-eqz v1, :cond_2

    new-instance v2, Ljava/util/ArrayList;

    iget-object v3, v1, Lcom/czhj/sdk/common/models/AdCache;->crids:Ljava/util/List;

    invoke-direct {v2, v3}, Ljava/util/ArrayList;-><init>(Ljava/util/Collection;)V

    if-eqz v1, :cond_1

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getCrid()Ljava/lang/String;

    move-result-object v1

    invoke-interface {v2, v1}, Ljava/util/List;->contains(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getCrid()Ljava/lang/String;

    move-result-object v1

    invoke-interface {v2, v1}, Ljava/util/List;->remove(Ljava/lang/Object;)Z

    :cond_1
    new-instance v1, Lcom/czhj/sdk/common/models/AdCache;

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getAd_type()I

    move-result v3

    invoke-static {v3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v3

    invoke-direct {v1, v3, v2}, Lcom/czhj/sdk/common/models/AdCache;-><init>(Ljava/lang/Integer;Ljava/util/List;)V

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getadslot_id()Ljava/lang/String;

    move-result-object p1

    invoke-interface {v0, p1, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    :cond_2
    :goto_0
    return-void
.end method

.method public d(Ljava/lang/String;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/common/f;->s:Ljava/lang/String;

    return-void
.end method

.method public e(Ljava/lang/String;)Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/base/common/f;->m:Ljava/util/Map;

    invoke-interface {v0, p1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Ljava/lang/String;

    return-object p1
.end method

.method public e(Lcom/sigmob/sdk/base/models/BaseAdUnit;)V
    .locals 4

    if-eqz p1, :cond_3

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getCrid()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_3

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getadslot_id()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    goto :goto_0

    :cond_0
    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getAd_type()I

    move-result v0

    invoke-virtual {p0, v0}, Lcom/sigmob/sdk/base/common/f;->a(I)Ljava/util/Map;

    move-result-object v0

    if-eqz v0, :cond_1

    invoke-interface {v0}, Ljava/util/Map;->size()I

    move-result v1

    const/16 v2, 0x1d

    if-le v1, v2, :cond_1

    return-void

    :cond_1
    if-eqz v0, :cond_3

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getadslot_id()Ljava/lang/String;

    move-result-object v1

    invoke-interface {v0, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/czhj/sdk/common/models/AdCache;

    new-instance v2, Ljava/util/ArrayList;

    invoke-direct {v2}, Ljava/util/ArrayList;-><init>()V

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getCrid()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    if-eqz v1, :cond_2

    iget-object v1, v1, Lcom/czhj/sdk/common/models/AdCache;->crids:Ljava/util/List;

    invoke-virtual {v2, v1}, Ljava/util/ArrayList;->addAll(Ljava/util/Collection;)Z

    :cond_2
    new-instance v1, Lcom/czhj/sdk/common/models/AdCache;

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getAd_type()I

    move-result v3

    invoke-static {v3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v3

    invoke-direct {v1, v3, v2}, Lcom/czhj/sdk/common/models/AdCache;-><init>(Ljava/lang/Integer;Ljava/util/List;)V

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getadslot_id()Ljava/lang/String;

    move-result-object p1

    invoke-interface {v0, p1, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    :cond_3
    :goto_0
    return-void
.end method

.method public k()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/base/common/f;->r:Ljava/lang/String;

    return-object v0
.end method

.method public l()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/base/common/f;->s:Ljava/lang/String;

    return-object v0
.end method
