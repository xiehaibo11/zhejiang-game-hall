.class final Lcom/tkay/splashad/a/d$2;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/splashad/a/d;->b(Lcom/tkay/splashad/unitgroup/api/CustomSplashAdapter;Lcom/tkay/core/api/AdError;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/splashad/unitgroup/api/CustomSplashAdapter;

.field final synthetic b:Lcom/tkay/core/api/AdError;

.field final synthetic c:Lcom/tkay/splashad/a/d;


# direct methods
.method constructor <init>(Lcom/tkay/splashad/a/d;Lcom/tkay/splashad/unitgroup/api/CustomSplashAdapter;Lcom/tkay/core/api/AdError;)V
    .locals 0

    .line 297
    iput-object p1, p0, Lcom/tkay/splashad/a/d$2;->c:Lcom/tkay/splashad/a/d;

    iput-object p2, p0, Lcom/tkay/splashad/a/d$2;->a:Lcom/tkay/splashad/unitgroup/api/CustomSplashAdapter;

    iput-object p3, p0, Lcom/tkay/splashad/a/d$2;->b:Lcom/tkay/core/api/AdError;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 2

    .line 300
    iget-object v0, p0, Lcom/tkay/splashad/a/d$2;->a:Lcom/tkay/splashad/unitgroup/api/CustomSplashAdapter;

    if-eqz v0, :cond_0

    .line 301
    invoke-virtual {v0}, Lcom/tkay/splashad/unitgroup/api/CustomSplashAdapter;->destory()V

    .line 304
    :cond_0
    iget-object v0, p0, Lcom/tkay/splashad/a/d$2;->c:Lcom/tkay/splashad/a/d;

    iget-object v0, v0, Lcom/tkay/splashad/a/d;->b:Lcom/tkay/splashad/a/b;

    if-eqz v0, :cond_1

    .line 305
    iget-object v0, p0, Lcom/tkay/splashad/a/d$2;->c:Lcom/tkay/splashad/a/d;

    iget-object v0, v0, Lcom/tkay/splashad/a/d;->b:Lcom/tkay/splashad/a/b;

    iget-object v1, p0, Lcom/tkay/splashad/a/d$2;->b:Lcom/tkay/core/api/AdError;

    invoke-virtual {v0, v1}, Lcom/tkay/splashad/a/b;->onAdLoadFail(Lcom/tkay/core/api/AdError;)V

    .line 307
    :cond_1
    iget-object v0, p0, Lcom/tkay/splashad/a/d$2;->c:Lcom/tkay/splashad/a/d;

    const/4 v1, 0x0

    iput-object v1, v0, Lcom/tkay/splashad/a/d;->b:Lcom/tkay/splashad/a/b;

    return-void
.end method
