.class Lcom/sigmob/sdk/nativead/l$1;
.super Lcom/sigmob/sdk/nativead/y;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/sigmob/sdk/nativead/l;->a(II)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/sigmob/sdk/nativead/l;


# direct methods
.method constructor <init>(Lcom/sigmob/sdk/nativead/l;Landroid/os/Looper;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/nativead/l$1;->a:Lcom/sigmob/sdk/nativead/l;

    invoke-direct {p0, p2}, Lcom/sigmob/sdk/nativead/y;-><init>(Landroid/os/Looper;)V

    return-void
.end method


# virtual methods
.method public handleMessage(Landroid/os/Message;)V
    .locals 1

    iget p1, p1, Landroid/os/Message;->what:I

    const v0, 0x15444

    if-ne v0, p1, :cond_0

    iget-object p1, p0, Lcom/sigmob/sdk/nativead/l$1;->a:Lcom/sigmob/sdk/nativead/l;

    invoke-static {p1}, Lcom/sigmob/sdk/nativead/l;->a(Lcom/sigmob/sdk/nativead/l;)Lcom/sigmob/sdk/nativead/l$a;

    move-result-object p1

    if-eqz p1, :cond_0

    iget-object p1, p0, Lcom/sigmob/sdk/nativead/l$1;->a:Lcom/sigmob/sdk/nativead/l;

    invoke-static {p1}, Lcom/sigmob/sdk/nativead/l;->b(Lcom/sigmob/sdk/nativead/l;)V

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/l$1;->a()V

    :cond_0
    return-void
.end method
