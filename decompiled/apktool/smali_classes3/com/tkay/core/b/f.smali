.class public Lcom/tkay/core/b/f;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/tkay/core/b/f$a;
    }
.end annotation


# static fields
.field public static a:Ljava/lang/String;


# instance fields
.field b:Lcom/tkay/core/common/f/ag;

.field c:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;"
        }
    .end annotation
.end field

.field d:Lcom/tkay/core/b/f$a;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 35
    const-class v0, Lcom/tkay/core/b/f;

    invoke-virtual {v0}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/tkay/core/b/f;->a:Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Lcom/tkay/core/common/f/ag;)V
    .locals 0

    .line 41
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 42
    iput-object p1, p0, Lcom/tkay/core/b/f;->b:Lcom/tkay/core/common/f/ag;

    .line 44
    iget-object p1, p1, Lcom/tkay/core/common/f/ag;->r:Ljava/util/Map;

    iput-object p1, p0, Lcom/tkay/core/b/f;->c:Ljava/util/Map;

    return-void
.end method

.method private a(Lcom/tkay/core/api/TYBaseAdAdapter;Lcom/tkay/core/common/f/aj;)V
    .locals 4

    .line 76
    :try_start_0
    iget-object v0, p0, Lcom/tkay/core/b/f;->b:Lcom/tkay/core/common/f/ag;

    iget-object v0, v0, Lcom/tkay/core/common/f/ag;->o:Lcom/tkay/core/c/d;

    iget-object v1, p0, Lcom/tkay/core/b/f;->b:Lcom/tkay/core/common/f/ag;

    iget-object v1, v1, Lcom/tkay/core/common/f/ag;->e:Ljava/lang/String;

    iget-object v2, p0, Lcom/tkay/core/b/f;->b:Lcom/tkay/core/common/f/ag;

    iget-object v2, v2, Lcom/tkay/core/common/f/ag;->d:Ljava/lang/String;

    invoke-virtual {v0, v1, v2, p2}, Lcom/tkay/core/c/d;->a(Ljava/lang/String;Ljava/lang/String;Lcom/tkay/core/common/f/aj;)Ljava/util/Map;

    move-result-object v0

    .line 77
    iget-object v1, p0, Lcom/tkay/core/b/f;->b:Lcom/tkay/core/common/f/ag;

    iget-object v1, v1, Lcom/tkay/core/common/f/ag;->t:Lcom/tkay/core/common/f/d;

    invoke-virtual {v1}, Lcom/tkay/core/common/f/d;->N()Lcom/tkay/core/common/f/d;

    move-result-object v1

    const/4 v2, 0x0

    .line 78
    invoke-static {v1, p2, v2, v2}, Lcom/tkay/core/common/l/s;->a(Lcom/tkay/core/common/f/d;Lcom/tkay/core/common/f/aj;IZ)V

    .line 80
    invoke-static {v0, v1}, Lcom/tkay/core/common/l/g;->a(Ljava/util/Map;Lcom/tkay/core/common/f/d;)V

    .line 82
    iget-object v1, p0, Lcom/tkay/core/b/f;->b:Lcom/tkay/core/common/f/ag;

    iget-object v1, v1, Lcom/tkay/core/common/f/ag;->b:Landroid/content/Context;

    iget-object v2, p0, Lcom/tkay/core/b/f;->c:Ljava/util/Map;

    new-instance v3, Lcom/tkay/core/b/f$2;

    invoke-direct {v3, p0, p2}, Lcom/tkay/core/b/f$2;-><init>(Lcom/tkay/core/b/f;Lcom/tkay/core/common/f/aj;)V

    invoke-virtual {p1, v1, v0, v2, v3}, Lcom/tkay/core/api/TYBaseAdAdapter;->getBidRequestInfo(Landroid/content/Context;Ljava/util/Map;Ljava/util/Map;Lcom/tkay/core/api/TYBidRequestInfoListener;)V

    .line 99
    iget-object v0, p0, Lcom/tkay/core/b/f;->d:Lcom/tkay/core/b/f$a;

    if-eqz v0, :cond_0

    .line 100
    iget-object v0, p0, Lcom/tkay/core/b/f;->d:Lcom/tkay/core/b/f$a;

    invoke-interface {v0, p2, p1}, Lcom/tkay/core/b/f$a;->a(Lcom/tkay/core/common/f/aj;Lcom/tkay/core/api/TYBaseAdAdapter;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :cond_0
    return-void

    :catchall_0
    move-exception p1

    .line 103
    invoke-virtual {p1}, Ljava/lang/Throwable;->printStackTrace()V

    .line 105
    iget-object v0, p0, Lcom/tkay/core/b/f;->d:Lcom/tkay/core/b/f$a;

    if-eqz v0, :cond_1

    .line 106
    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-interface {v0, p1, p2}, Lcom/tkay/core/b/f$a;->a(Ljava/lang/String;Lcom/tkay/core/common/f/aj;)V

    :cond_1
    return-void
.end method

.method static synthetic a(Lcom/tkay/core/b/f;Lcom/tkay/core/api/TYBaseAdAdapter;Lcom/tkay/core/common/f/aj;)V
    .locals 4

    .line 1076
    :try_start_0
    iget-object v0, p0, Lcom/tkay/core/b/f;->b:Lcom/tkay/core/common/f/ag;

    iget-object v0, v0, Lcom/tkay/core/common/f/ag;->o:Lcom/tkay/core/c/d;

    iget-object v1, p0, Lcom/tkay/core/b/f;->b:Lcom/tkay/core/common/f/ag;

    iget-object v1, v1, Lcom/tkay/core/common/f/ag;->e:Ljava/lang/String;

    iget-object v2, p0, Lcom/tkay/core/b/f;->b:Lcom/tkay/core/common/f/ag;

    iget-object v2, v2, Lcom/tkay/core/common/f/ag;->d:Ljava/lang/String;

    invoke-virtual {v0, v1, v2, p2}, Lcom/tkay/core/c/d;->a(Ljava/lang/String;Ljava/lang/String;Lcom/tkay/core/common/f/aj;)Ljava/util/Map;

    move-result-object v0

    .line 1077
    iget-object v1, p0, Lcom/tkay/core/b/f;->b:Lcom/tkay/core/common/f/ag;

    iget-object v1, v1, Lcom/tkay/core/common/f/ag;->t:Lcom/tkay/core/common/f/d;

    invoke-virtual {v1}, Lcom/tkay/core/common/f/d;->N()Lcom/tkay/core/common/f/d;

    move-result-object v1

    const/4 v2, 0x0

    .line 1078
    invoke-static {v1, p2, v2, v2}, Lcom/tkay/core/common/l/s;->a(Lcom/tkay/core/common/f/d;Lcom/tkay/core/common/f/aj;IZ)V

    .line 1080
    invoke-static {v0, v1}, Lcom/tkay/core/common/l/g;->a(Ljava/util/Map;Lcom/tkay/core/common/f/d;)V

    .line 1082
    iget-object v1, p0, Lcom/tkay/core/b/f;->b:Lcom/tkay/core/common/f/ag;

    iget-object v1, v1, Lcom/tkay/core/common/f/ag;->b:Landroid/content/Context;

    iget-object v2, p0, Lcom/tkay/core/b/f;->c:Ljava/util/Map;

    new-instance v3, Lcom/tkay/core/b/f$2;

    invoke-direct {v3, p0, p2}, Lcom/tkay/core/b/f$2;-><init>(Lcom/tkay/core/b/f;Lcom/tkay/core/common/f/aj;)V

    invoke-virtual {p1, v1, v0, v2, v3}, Lcom/tkay/core/api/TYBaseAdAdapter;->getBidRequestInfo(Landroid/content/Context;Ljava/util/Map;Ljava/util/Map;Lcom/tkay/core/api/TYBidRequestInfoListener;)V

    .line 1099
    iget-object v0, p0, Lcom/tkay/core/b/f;->d:Lcom/tkay/core/b/f$a;

    if-eqz v0, :cond_0

    .line 1100
    iget-object v0, p0, Lcom/tkay/core/b/f;->d:Lcom/tkay/core/b/f$a;

    invoke-interface {v0, p2, p1}, Lcom/tkay/core/b/f$a;->a(Lcom/tkay/core/common/f/aj;Lcom/tkay/core/api/TYBaseAdAdapter;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :cond_0
    return-void

    :catchall_0
    move-exception p1

    .line 1103
    invoke-virtual {p1}, Ljava/lang/Throwable;->printStackTrace()V

    .line 1105
    iget-object p0, p0, Lcom/tkay/core/b/f;->d:Lcom/tkay/core/b/f$a;

    if-eqz p0, :cond_1

    .line 1106
    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-interface {p0, p1, p2}, Lcom/tkay/core/b/f$a;->a(Ljava/lang/String;Lcom/tkay/core/common/f/aj;)V

    :cond_1
    return-void
.end method

.method static synthetic a(Lcom/tkay/core/b/f;Lcom/tkay/core/common/f/aj;Lcom/tkay/core/api/TYBidRequestInfo;)V
    .locals 2

    .line 1113
    invoke-static {}, Lcom/tkay/core/common/l/b/a;->a()Lcom/tkay/core/common/l/b/a;

    move-result-object v0

    new-instance v1, Lcom/tkay/core/b/f$3;

    invoke-direct {v1, p0, p2, p1}, Lcom/tkay/core/b/f$3;-><init>(Lcom/tkay/core/b/f;Lcom/tkay/core/api/TYBidRequestInfo;Lcom/tkay/core/common/f/aj;)V

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/l/b/a;->a(Ljava/lang/Runnable;)V

    return-void
.end method

.method private a(Lcom/tkay/core/common/f/aj;Lcom/tkay/core/api/TYBidRequestInfo;)V
    .locals 2

    .line 113
    invoke-static {}, Lcom/tkay/core/common/l/b/a;->a()Lcom/tkay/core/common/l/b/a;

    move-result-object v0

    new-instance v1, Lcom/tkay/core/b/f$3;

    invoke-direct {v1, p0, p2, p1}, Lcom/tkay/core/b/f$3;-><init>(Lcom/tkay/core/b/f;Lcom/tkay/core/api/TYBidRequestInfo;Lcom/tkay/core/common/f/aj;)V

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/l/b/a;->a(Ljava/lang/Runnable;)V

    return-void
.end method

.method private a(Lcom/tkay/core/common/f/aj;Lcom/tkay/core/b/f$a;)V
    .locals 2

    .line 49
    iput-object p2, p0, Lcom/tkay/core/b/f;->d:Lcom/tkay/core/b/f$a;

    .line 51
    invoke-static {p1}, Lcom/tkay/core/common/l/i;->a(Lcom/tkay/core/common/f/aj;)Lcom/tkay/core/api/TYBaseAdAdapter;

    move-result-object v0

    if-nez v0, :cond_0

    const-string v0, "There is no Network Adapter."

    .line 55
    invoke-interface {p2, v0, p1}, Lcom/tkay/core/b/f$a;->a(Ljava/lang/String;Lcom/tkay/core/common/f/aj;)V

    return-void

    .line 60
    :cond_0
    invoke-static {}, Lcom/tkay/core/common/l/b/a;->a()Lcom/tkay/core/common/l/b/a;

    move-result-object p2

    new-instance v1, Lcom/tkay/core/b/f$1;

    invoke-direct {v1, p0, v0, p1}, Lcom/tkay/core/b/f$1;-><init>(Lcom/tkay/core/b/f;Lcom/tkay/core/api/TYBaseAdAdapter;Lcom/tkay/core/common/f/aj;)V

    invoke-virtual {p2, v1}, Lcom/tkay/core/common/l/b/a;->a(Ljava/lang/Runnable;)V

    return-void
.end method
