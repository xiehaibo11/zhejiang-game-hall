.class Lcom/cmic/gen/sdk/view/GenLoginAuthActivity$a;
.super Landroid/os/Handler;
.source "GenLoginAuthActivity.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0xa
    name = "a"
.end annotation


# instance fields
.field a:Ljava/lang/ref/WeakReference;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/lang/ref/WeakReference<",
            "Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method constructor <init>(Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;)V
    .locals 1

    .line 1000
    invoke-direct {p0}, Landroid/os/Handler;-><init>()V

    .line 1001
    new-instance v0, Ljava/lang/ref/WeakReference;

    invoke-direct {v0, p1}, Ljava/lang/ref/WeakReference;-><init>(Ljava/lang/Object;)V

    iput-object v0, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity$a;->a:Ljava/lang/ref/WeakReference;

    return-void
.end method

.method private a(Landroid/os/Message;)V
    .locals 2

    .line 1014
    iget-object v0, p0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity$a;->a:Ljava/lang/ref/WeakReference;

    invoke-virtual {v0}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;

    if-eqz v0, :cond_0

    .line 1016
    iget p1, p1, Landroid/os/Message;->what:I

    const/4 v1, 0x1

    if-ne p1, v1, :cond_0

    .line 1017
    invoke-virtual {v0}, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->c()V

    .line 1018
    invoke-static {v0}, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;->m(Lcom/cmic/gen/sdk/view/GenLoginAuthActivity;)V

    :cond_0
    return-void
.end method


# virtual methods
.method public handleMessage(Landroid/os/Message;)V
    .locals 1

    .line 1006
    :try_start_0
    invoke-direct {p0, p1}, Lcom/cmic/gen/sdk/view/GenLoginAuthActivity$a;->a(Landroid/os/Message;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 1008
    sget-object v0, Lcom/cmic/gen/sdk/d/c;->b:Ljava/util/ArrayList;

    invoke-virtual {v0, p1}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 1009
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    return-void
.end method
