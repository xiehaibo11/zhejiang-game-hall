.class final Lcom/reyun/tracking/sdk/h;
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

    invoke-static {}, Lcom/reyun/tracking/sdk/a;->a()Lcom/reyun/tracking/sdk/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/reyun/tracking/sdk/a;->b()V

    const/4 v0, 0x0

    invoke-static {v0}, Lcom/reyun/tracking/sdk/Tracking;->access$002(Landroid/content/Context;)Landroid/content/Context;

    invoke-static {v0}, Lcom/reyun/tracking/sdk/Tracking;->access$1302(Landroid/app/Application;)Landroid/app/Application;

    return-void
.end method
