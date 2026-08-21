.class final Lcom/tkay/expressad/foundation/g/f/d$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/util/concurrent/Executor;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/expressad/foundation/g/f/d;-><init>(Landroid/os/Handler;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Landroid/os/Handler;

.field final synthetic b:Lcom/tkay/expressad/foundation/g/f/d;


# direct methods
.method constructor <init>(Lcom/tkay/expressad/foundation/g/f/d;Landroid/os/Handler;)V
    .locals 0

    .line 15
    iput-object p1, p0, Lcom/tkay/expressad/foundation/g/f/d$1;->b:Lcom/tkay/expressad/foundation/g/f/d;

    iput-object p2, p0, Lcom/tkay/expressad/foundation/g/f/d$1;->a:Landroid/os/Handler;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final execute(Ljava/lang/Runnable;)V
    .locals 1

    .line 18
    iget-object v0, p0, Lcom/tkay/expressad/foundation/g/f/d$1;->a:Landroid/os/Handler;

    invoke-virtual {v0, p1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    return-void
.end method
