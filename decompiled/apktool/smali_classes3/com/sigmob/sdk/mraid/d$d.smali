.class Lcom/sigmob/sdk/mraid/d$d;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/sigmob/sdk/mraid/d;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = "d"
.end annotation

.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/sigmob/sdk/mraid/d$d$a;
    }
.end annotation


# instance fields
.field private final a:Landroid/os/Handler;

.field private b:Lcom/sigmob/sdk/mraid/d$d$a;


# direct methods
.method constructor <init>()V
    .locals 1

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    new-instance v0, Landroid/os/Handler;

    invoke-direct {v0}, Landroid/os/Handler;-><init>()V

    iput-object v0, p0, Lcom/sigmob/sdk/mraid/d$d;->a:Landroid/os/Handler;

    return-void
.end method


# virtual methods
.method varargs a([Landroid/view/View;)Lcom/sigmob/sdk/mraid/d$d$a;
    .locals 3

    new-instance v0, Lcom/sigmob/sdk/mraid/d$d$a;

    iget-object v1, p0, Lcom/sigmob/sdk/mraid/d$d;->a:Landroid/os/Handler;

    const/4 v2, 0x0

    invoke-direct {v0, v1, p1, v2}, Lcom/sigmob/sdk/mraid/d$d$a;-><init>(Landroid/os/Handler;[Landroid/view/View;Lcom/sigmob/sdk/mraid/d$1;)V

    iput-object v0, p0, Lcom/sigmob/sdk/mraid/d$d;->b:Lcom/sigmob/sdk/mraid/d$d$a;

    return-object v0
.end method

.method a()V
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/d$d;->b:Lcom/sigmob/sdk/mraid/d$d$a;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/sigmob/sdk/mraid/d$d$a;->a()V

    const/4 v0, 0x0

    iput-object v0, p0, Lcom/sigmob/sdk/mraid/d$d;->b:Lcom/sigmob/sdk/mraid/d$d$a;

    :cond_0
    return-void
.end method
