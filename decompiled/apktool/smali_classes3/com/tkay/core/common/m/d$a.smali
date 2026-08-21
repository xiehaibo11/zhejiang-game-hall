.class public final Lcom/tkay/core/common/m/d$a;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/core/api/TYCustomLoadListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/core/common/m/d;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x1
    name = "a"
.end annotation


# instance fields
.field a:Lcom/tkay/core/api/TYBaseAdAdapter;

.field b:Lcom/tkay/core/common/m/d;

.field final synthetic c:Lcom/tkay/core/common/m/d;


# direct methods
.method private constructor <init>(Lcom/tkay/core/common/m/d;Lcom/tkay/core/common/m/d;Lcom/tkay/core/api/TYBaseAdAdapter;)V
    .locals 0

    .line 482
    iput-object p1, p0, Lcom/tkay/core/common/m/d$a;->c:Lcom/tkay/core/common/m/d;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 483
    iput-object p2, p0, Lcom/tkay/core/common/m/d$a;->b:Lcom/tkay/core/common/m/d;

    .line 484
    iput-object p3, p0, Lcom/tkay/core/common/m/d$a;->a:Lcom/tkay/core/api/TYBaseAdAdapter;

    return-void
.end method

.method synthetic constructor <init>(Lcom/tkay/core/common/m/d;Lcom/tkay/core/common/m/d;Lcom/tkay/core/api/TYBaseAdAdapter;B)V
    .locals 0

    .line 478
    invoke-direct {p0, p1, p2, p3}, Lcom/tkay/core/common/m/d$a;-><init>(Lcom/tkay/core/common/m/d;Lcom/tkay/core/common/m/d;Lcom/tkay/core/api/TYBaseAdAdapter;)V

    return-void
.end method


# virtual methods
.method public final varargs onAdCacheLoaded([Lcom/tkay/core/api/BaseAd;)V
    .locals 2

    .line 503
    invoke-static {}, Lcom/tkay/core/common/l/b/a;->a()Lcom/tkay/core/common/l/b/a;

    move-result-object v0

    new-instance v1, Lcom/tkay/core/common/m/d$a$2;

    invoke-direct {v1, p0, p1}, Lcom/tkay/core/common/m/d$a$2;-><init>(Lcom/tkay/core/common/m/d$a;[Lcom/tkay/core/api/BaseAd;)V

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/l/b/a;->a(Ljava/lang/Runnable;)V

    return-void
.end method

.method public final onAdDataLoaded()V
    .locals 2

    .line 489
    invoke-static {}, Lcom/tkay/core/common/l/b/a;->a()Lcom/tkay/core/common/l/b/a;

    move-result-object v0

    new-instance v1, Lcom/tkay/core/common/m/d$a$1;

    invoke-direct {v1, p0}, Lcom/tkay/core/common/m/d$a$1;-><init>(Lcom/tkay/core/common/m/d$a;)V

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/l/b/a;->a(Ljava/lang/Runnable;)V

    return-void
.end method

.method public final onAdLoadError(Ljava/lang/String;Ljava/lang/String;)V
    .locals 2

    .line 520
    invoke-static {}, Lcom/tkay/core/common/l/b/a;->a()Lcom/tkay/core/common/l/b/a;

    move-result-object v0

    new-instance v1, Lcom/tkay/core/common/m/d$a$3;

    invoke-direct {v1, p0, p1, p2}, Lcom/tkay/core/common/m/d$a$3;-><init>(Lcom/tkay/core/common/m/d$a;Ljava/lang/String;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/l/b/a;->a(Ljava/lang/Runnable;)V

    return-void
.end method
