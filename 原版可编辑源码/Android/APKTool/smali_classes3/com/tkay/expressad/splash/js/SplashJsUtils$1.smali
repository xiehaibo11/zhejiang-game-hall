.class Lcom/tkay/expressad/splash/js/SplashJsUtils$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/expressad/splash/js/SplashJsUtils;->updateFrequence(Lcom/tkay/expressad/foundation/d/c;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/expressad/foundation/d/c;


# direct methods
.method constructor <init>(Lcom/tkay/expressad/foundation/d/c;)V
    .locals 0

    .line 221
    iput-object p1, p0, Lcom/tkay/expressad/splash/js/SplashJsUtils$1;->a:Lcom/tkay/expressad/foundation/d/c;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 2

    .line 241
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/splash/js/SplashJsUtils$1;->a:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->K()Ljava/lang/String;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/expressad/splash/js/SplashJsUtils$1;->a:Lcom/tkay/expressad/foundation/d/c;

    invoke-static {v0, v1}, Lcom/tkay/expressad/splash/js/SplashJsUtils;->a(Ljava/lang/String;Lcom/tkay/expressad/foundation/d/c;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception v0

    .line 243
    invoke-static {}, Lcom/tkay/expressad/splash/js/SplashJsUtils;->a()Ljava/lang/String;

    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    return-void
.end method
