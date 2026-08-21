.class final Lcom/reyun/tracking/utils/e;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# direct methods
.method constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 1

    const/4 v0, 0x1

    sput-boolean v0, Lcom/reyun/tracking/a/i;->c:Z

    invoke-static {}, Lcom/reyun/tracking/utils/p;->a()Lcom/reyun/tracking/utils/p;

    move-result-object v0

    if-eqz v0, :cond_0

    invoke-static {}, Lcom/reyun/tracking/utils/p;->a()Lcom/reyun/tracking/utils/p;

    move-result-object v0

    invoke-virtual {v0}, Lcom/reyun/tracking/utils/p;->c()V

    :cond_0
    const/4 v0, 0x0

    invoke-static {v0}, Lcom/reyun/tracking/utils/d;->a(Ljava/lang/Runnable;)Ljava/lang/Runnable;

    return-void
.end method
