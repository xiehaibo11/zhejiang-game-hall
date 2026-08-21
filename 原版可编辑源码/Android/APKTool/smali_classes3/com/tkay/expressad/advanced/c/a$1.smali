.class final Lcom/tkay/expressad/advanced/c/a$1;
.super Landroid/os/Handler;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/expressad/advanced/c/a;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/expressad/advanced/c/a;


# direct methods
.method constructor <init>(Lcom/tkay/expressad/advanced/c/a;Landroid/os/Looper;)V
    .locals 0

    .line 97
    iput-object p1, p0, Lcom/tkay/expressad/advanced/c/a$1;->a:Lcom/tkay/expressad/advanced/c/a;

    invoke-direct {p0, p2}, Landroid/os/Handler;-><init>(Landroid/os/Looper;)V

    return-void
.end method


# virtual methods
.method public final handleMessage(Landroid/os/Message;)V
    .locals 3

    .line 100
    invoke-super {p0, p1}, Landroid/os/Handler;->handleMessage(Landroid/os/Message;)V

    .line 101
    iget v0, p1, Landroid/os/Message;->what:I

    const/4 v1, 0x1

    if-eq v0, v1, :cond_6

    const/4 v2, 0x2

    if-eq v0, v2, :cond_5

    const/4 v2, 0x3

    if-eq v0, v2, :cond_4

    const/4 v2, 0x4

    if-eq v0, v2, :cond_2

    const/4 v2, 0x5

    if-eq v0, v2, :cond_0

    goto/16 :goto_0

    .line 124
    :cond_0
    iget-object p1, p1, Landroid/os/Message;->obj:Ljava/lang/Object;

    if-eqz p1, :cond_7

    .line 125
    instance-of v0, p1, Lcom/tkay/expressad/foundation/d/c;

    if-eqz v0, :cond_7

    .line 126
    iget-object v0, p0, Lcom/tkay/expressad/advanced/c/a$1;->a:Lcom/tkay/expressad/advanced/c/a;

    invoke-static {v0}, Lcom/tkay/expressad/advanced/c/a;->a(Lcom/tkay/expressad/advanced/c/a;)Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 127
    iget-object v0, p0, Lcom/tkay/expressad/advanced/c/a$1;->a:Lcom/tkay/expressad/advanced/c/a;

    invoke-static {v0}, Lcom/tkay/expressad/advanced/c/a;->a(Lcom/tkay/expressad/advanced/c/a;)Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;

    move-result-object v0

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;->setVideoReady(Z)V

    .line 129
    :cond_1
    check-cast p1, Lcom/tkay/expressad/foundation/d/c;

    .line 130
    iget-object v0, p0, Lcom/tkay/expressad/advanced/c/a$1;->a:Lcom/tkay/expressad/advanced/c/a;

    invoke-static {v0}, Lcom/tkay/expressad/advanced/c/a;->b(Lcom/tkay/expressad/advanced/c/a;)I

    move-result v1

    invoke-static {v0, p1, v1}, Lcom/tkay/expressad/advanced/c/a;->a(Lcom/tkay/expressad/advanced/c/a;Lcom/tkay/expressad/foundation/d/c;I)V

    return-void

    .line 113
    :cond_2
    iget-object p1, p1, Landroid/os/Message;->obj:Ljava/lang/Object;

    if-eqz p1, :cond_7

    .line 114
    instance-of v0, p1, Lcom/tkay/expressad/foundation/d/c;

    if-eqz v0, :cond_7

    .line 115
    iget-object v0, p0, Lcom/tkay/expressad/advanced/c/a$1;->a:Lcom/tkay/expressad/advanced/c/a;

    invoke-static {v0}, Lcom/tkay/expressad/advanced/c/a;->a(Lcom/tkay/expressad/advanced/c/a;)Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;

    move-result-object v0

    if-eqz v0, :cond_3

    .line 116
    iget-object v0, p0, Lcom/tkay/expressad/advanced/c/a$1;->a:Lcom/tkay/expressad/advanced/c/a;

    invoke-static {v0}, Lcom/tkay/expressad/advanced/c/a;->a(Lcom/tkay/expressad/advanced/c/a;)Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;

    move-result-object v0

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;->setEndCardReady(Z)V

    .line 118
    :cond_3
    check-cast p1, Lcom/tkay/expressad/foundation/d/c;

    .line 119
    iget-object v0, p0, Lcom/tkay/expressad/advanced/c/a$1;->a:Lcom/tkay/expressad/advanced/c/a;

    invoke-static {v0}, Lcom/tkay/expressad/advanced/c/a;->b(Lcom/tkay/expressad/advanced/c/a;)I

    move-result v1

    invoke-static {v0, p1, v1}, Lcom/tkay/expressad/advanced/c/a;->a(Lcom/tkay/expressad/advanced/c/a;Lcom/tkay/expressad/foundation/d/c;I)V

    return-void

    .line 141
    :cond_4
    iget-object p1, p1, Landroid/os/Message;->obj:Ljava/lang/Object;

    if-eqz p1, :cond_7

    .line 142
    instance-of v0, p1, Lcom/tkay/expressad/foundation/d/c;

    if-eqz v0, :cond_7

    .line 143
    check-cast p1, Lcom/tkay/expressad/foundation/d/c;

    .line 144
    iget-object v0, p0, Lcom/tkay/expressad/advanced/c/a$1;->a:Lcom/tkay/expressad/advanced/c/a;

    invoke-static {v0}, Lcom/tkay/expressad/advanced/c/a;->b(Lcom/tkay/expressad/advanced/c/a;)I

    move-result v1

    invoke-static {v0, p1, v1}, Lcom/tkay/expressad/advanced/c/a;->a(Lcom/tkay/expressad/advanced/c/a;Lcom/tkay/expressad/foundation/d/c;I)V

    goto :goto_0

    .line 134
    :cond_5
    iget-object p1, p1, Landroid/os/Message;->obj:Ljava/lang/Object;

    if-eqz p1, :cond_7

    .line 135
    instance-of v0, p1, Ljava/lang/String;

    if-eqz v0, :cond_7

    .line 136
    iget-object v0, p0, Lcom/tkay/expressad/advanced/c/a$1;->a:Lcom/tkay/expressad/advanced/c/a;

    invoke-virtual {p1}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object p1

    iget-object v1, p0, Lcom/tkay/expressad/advanced/c/a$1;->a:Lcom/tkay/expressad/advanced/c/a;

    invoke-static {v1}, Lcom/tkay/expressad/advanced/c/a;->c(Lcom/tkay/expressad/advanced/c/a;)Ljava/lang/String;

    iget-object v1, p0, Lcom/tkay/expressad/advanced/c/a$1;->a:Lcom/tkay/expressad/advanced/c/a;

    invoke-static {v1}, Lcom/tkay/expressad/advanced/c/a;->b(Lcom/tkay/expressad/advanced/c/a;)I

    move-result v1

    invoke-static {v0, p1, v1}, Lcom/tkay/expressad/advanced/c/a;->a(Lcom/tkay/expressad/advanced/c/a;Ljava/lang/String;I)V

    return-void

    .line 103
    :cond_6
    iget-object v0, p1, Landroid/os/Message;->obj:Ljava/lang/Object;

    .line 104
    iget p1, p1, Landroid/os/Message;->arg1:I

    if-eqz v0, :cond_7

    .line 105
    instance-of v1, v0, Lcom/tkay/expressad/foundation/d/c;

    if-eqz v1, :cond_7

    .line 106
    check-cast v0, Lcom/tkay/expressad/foundation/d/c;

    .line 107
    invoke-static {}, Lcom/tkay/expressad/videocommon/b/g;->a()Lcom/tkay/expressad/videocommon/b/g;

    move-result-object v1

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->c()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Lcom/tkay/expressad/videocommon/b/g;->c(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    .line 108
    iget-object v2, p0, Lcom/tkay/expressad/advanced/c/a$1;->a:Lcom/tkay/expressad/advanced/c/a;

    invoke-static {v2, v1, v0, p1}, Lcom/tkay/expressad/advanced/c/a;->a(Lcom/tkay/expressad/advanced/c/a;Ljava/lang/String;Lcom/tkay/expressad/foundation/d/c;I)V

    :cond_7
    :goto_0
    return-void
.end method
