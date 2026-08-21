.class final Lcom/tkay/basead/ui/PlayerView$1;
.super Landroid/os/Handler;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/basead/ui/PlayerView;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/basead/ui/PlayerView;


# direct methods
.method constructor <init>(Lcom/tkay/basead/ui/PlayerView;Landroid/os/Looper;)V
    .locals 0

    .line 124
    iput-object p1, p0, Lcom/tkay/basead/ui/PlayerView$1;->a:Lcom/tkay/basead/ui/PlayerView;

    invoke-direct {p0, p2}, Landroid/os/Handler;-><init>(Landroid/os/Looper;)V

    return-void
.end method


# virtual methods
.method public final handleMessage(Landroid/os/Message;)V
    .locals 1

    .line 127
    iget-object v0, p0, Lcom/tkay/basead/ui/PlayerView$1;->a:Lcom/tkay/basead/ui/PlayerView;

    iget p1, p1, Landroid/os/Message;->what:I

    invoke-static {v0, p1}, Lcom/tkay/basead/ui/PlayerView;->a(Lcom/tkay/basead/ui/PlayerView;I)I

    .line 133
    iget-object p1, p0, Lcom/tkay/basead/ui/PlayerView$1;->a:Lcom/tkay/basead/ui/PlayerView;

    invoke-static {p1}, Lcom/tkay/basead/ui/PlayerView;->a(Lcom/tkay/basead/ui/PlayerView;)Z

    move-result p1

    if-nez p1, :cond_0

    iget-object p1, p0, Lcom/tkay/basead/ui/PlayerView$1;->a:Lcom/tkay/basead/ui/PlayerView;

    invoke-static {p1}, Lcom/tkay/basead/ui/PlayerView;->b(Lcom/tkay/basead/ui/PlayerView;)Z

    move-result p1

    if-nez p1, :cond_0

    .line 134
    iget-object p1, p0, Lcom/tkay/basead/ui/PlayerView$1;->a:Lcom/tkay/basead/ui/PlayerView;

    invoke-static {p1}, Lcom/tkay/basead/ui/PlayerView;->c(Lcom/tkay/basead/ui/PlayerView;)Z

    .line 135
    iget-object p1, p0, Lcom/tkay/basead/ui/PlayerView$1;->a:Lcom/tkay/basead/ui/PlayerView;

    invoke-static {p1}, Lcom/tkay/basead/ui/PlayerView;->d(Lcom/tkay/basead/ui/PlayerView;)Lcom/tkay/basead/ui/PlayerView$a;

    move-result-object p1

    if-eqz p1, :cond_0

    .line 136
    iget-object p1, p0, Lcom/tkay/basead/ui/PlayerView$1;->a:Lcom/tkay/basead/ui/PlayerView;

    invoke-static {p1}, Lcom/tkay/basead/ui/PlayerView;->d(Lcom/tkay/basead/ui/PlayerView;)Lcom/tkay/basead/ui/PlayerView$a;

    move-result-object p1

    invoke-interface {p1}, Lcom/tkay/basead/ui/PlayerView$a;->a()V

    .line 140
    :cond_0
    iget-object p1, p0, Lcom/tkay/basead/ui/PlayerView$1;->a:Lcom/tkay/basead/ui/PlayerView;

    invoke-static {p1}, Lcom/tkay/basead/ui/PlayerView;->d(Lcom/tkay/basead/ui/PlayerView;)Lcom/tkay/basead/ui/PlayerView$a;

    move-result-object p1

    if-eqz p1, :cond_1

    .line 141
    iget-object p1, p0, Lcom/tkay/basead/ui/PlayerView$1;->a:Lcom/tkay/basead/ui/PlayerView;

    invoke-static {p1}, Lcom/tkay/basead/ui/PlayerView;->d(Lcom/tkay/basead/ui/PlayerView;)Lcom/tkay/basead/ui/PlayerView$a;

    move-result-object p1

    iget-object v0, p0, Lcom/tkay/basead/ui/PlayerView$1;->a:Lcom/tkay/basead/ui/PlayerView;

    invoke-static {v0}, Lcom/tkay/basead/ui/PlayerView;->e(Lcom/tkay/basead/ui/PlayerView;)I

    move-result v0

    invoke-interface {p1, v0}, Lcom/tkay/basead/ui/PlayerView$a;->a(I)V

    .line 144
    :cond_1
    iget-object p1, p0, Lcom/tkay/basead/ui/PlayerView$1;->a:Lcom/tkay/basead/ui/PlayerView;

    invoke-static {p1}, Lcom/tkay/basead/ui/PlayerView;->f(Lcom/tkay/basead/ui/PlayerView;)Z

    move-result p1

    if-nez p1, :cond_2

    iget-object p1, p0, Lcom/tkay/basead/ui/PlayerView$1;->a:Lcom/tkay/basead/ui/PlayerView;

    invoke-static {p1}, Lcom/tkay/basead/ui/PlayerView;->e(Lcom/tkay/basead/ui/PlayerView;)I

    move-result p1

    iget-object v0, p0, Lcom/tkay/basead/ui/PlayerView$1;->a:Lcom/tkay/basead/ui/PlayerView;

    invoke-static {v0}, Lcom/tkay/basead/ui/PlayerView;->g(Lcom/tkay/basead/ui/PlayerView;)I

    move-result v0

    if-lt p1, v0, :cond_2

    .line 145
    iget-object p1, p0, Lcom/tkay/basead/ui/PlayerView$1;->a:Lcom/tkay/basead/ui/PlayerView;

    invoke-static {p1}, Lcom/tkay/basead/ui/PlayerView;->h(Lcom/tkay/basead/ui/PlayerView;)Z

    .line 146
    iget-object p1, p0, Lcom/tkay/basead/ui/PlayerView$1;->a:Lcom/tkay/basead/ui/PlayerView;

    invoke-static {p1}, Lcom/tkay/basead/ui/PlayerView;->d(Lcom/tkay/basead/ui/PlayerView;)Lcom/tkay/basead/ui/PlayerView$a;

    move-result-object p1

    if-eqz p1, :cond_4

    .line 147
    iget-object p1, p0, Lcom/tkay/basead/ui/PlayerView$1;->a:Lcom/tkay/basead/ui/PlayerView;

    invoke-static {p1}, Lcom/tkay/basead/ui/PlayerView;->d(Lcom/tkay/basead/ui/PlayerView;)Lcom/tkay/basead/ui/PlayerView$a;

    move-result-object p1

    const/16 v0, 0x19

    invoke-interface {p1, v0}, Lcom/tkay/basead/ui/PlayerView$a;->b(I)V

    goto :goto_0

    .line 149
    :cond_2
    iget-object p1, p0, Lcom/tkay/basead/ui/PlayerView$1;->a:Lcom/tkay/basead/ui/PlayerView;

    invoke-static {p1}, Lcom/tkay/basead/ui/PlayerView;->i(Lcom/tkay/basead/ui/PlayerView;)Z

    move-result p1

    if-nez p1, :cond_3

    iget-object p1, p0, Lcom/tkay/basead/ui/PlayerView$1;->a:Lcom/tkay/basead/ui/PlayerView;

    invoke-static {p1}, Lcom/tkay/basead/ui/PlayerView;->e(Lcom/tkay/basead/ui/PlayerView;)I

    move-result p1

    iget-object v0, p0, Lcom/tkay/basead/ui/PlayerView$1;->a:Lcom/tkay/basead/ui/PlayerView;

    invoke-static {v0}, Lcom/tkay/basead/ui/PlayerView;->j(Lcom/tkay/basead/ui/PlayerView;)I

    move-result v0

    if-lt p1, v0, :cond_3

    .line 150
    iget-object p1, p0, Lcom/tkay/basead/ui/PlayerView$1;->a:Lcom/tkay/basead/ui/PlayerView;

    invoke-static {p1}, Lcom/tkay/basead/ui/PlayerView;->k(Lcom/tkay/basead/ui/PlayerView;)Z

    .line 151
    iget-object p1, p0, Lcom/tkay/basead/ui/PlayerView$1;->a:Lcom/tkay/basead/ui/PlayerView;

    invoke-static {p1}, Lcom/tkay/basead/ui/PlayerView;->d(Lcom/tkay/basead/ui/PlayerView;)Lcom/tkay/basead/ui/PlayerView$a;

    move-result-object p1

    if-eqz p1, :cond_4

    .line 152
    iget-object p1, p0, Lcom/tkay/basead/ui/PlayerView$1;->a:Lcom/tkay/basead/ui/PlayerView;

    invoke-static {p1}, Lcom/tkay/basead/ui/PlayerView;->d(Lcom/tkay/basead/ui/PlayerView;)Lcom/tkay/basead/ui/PlayerView$a;

    move-result-object p1

    const/16 v0, 0x32

    invoke-interface {p1, v0}, Lcom/tkay/basead/ui/PlayerView$a;->b(I)V

    goto :goto_0

    .line 154
    :cond_3
    iget-object p1, p0, Lcom/tkay/basead/ui/PlayerView$1;->a:Lcom/tkay/basead/ui/PlayerView;

    invoke-static {p1}, Lcom/tkay/basead/ui/PlayerView;->l(Lcom/tkay/basead/ui/PlayerView;)Z

    move-result p1

    if-nez p1, :cond_4

    iget-object p1, p0, Lcom/tkay/basead/ui/PlayerView$1;->a:Lcom/tkay/basead/ui/PlayerView;

    invoke-static {p1}, Lcom/tkay/basead/ui/PlayerView;->e(Lcom/tkay/basead/ui/PlayerView;)I

    move-result p1

    iget-object v0, p0, Lcom/tkay/basead/ui/PlayerView$1;->a:Lcom/tkay/basead/ui/PlayerView;

    invoke-static {v0}, Lcom/tkay/basead/ui/PlayerView;->m(Lcom/tkay/basead/ui/PlayerView;)I

    move-result v0

    if-lt p1, v0, :cond_4

    .line 155
    iget-object p1, p0, Lcom/tkay/basead/ui/PlayerView$1;->a:Lcom/tkay/basead/ui/PlayerView;

    invoke-static {p1}, Lcom/tkay/basead/ui/PlayerView;->n(Lcom/tkay/basead/ui/PlayerView;)Z

    .line 156
    iget-object p1, p0, Lcom/tkay/basead/ui/PlayerView$1;->a:Lcom/tkay/basead/ui/PlayerView;

    invoke-static {p1}, Lcom/tkay/basead/ui/PlayerView;->d(Lcom/tkay/basead/ui/PlayerView;)Lcom/tkay/basead/ui/PlayerView$a;

    move-result-object p1

    if-eqz p1, :cond_4

    .line 157
    iget-object p1, p0, Lcom/tkay/basead/ui/PlayerView$1;->a:Lcom/tkay/basead/ui/PlayerView;

    invoke-static {p1}, Lcom/tkay/basead/ui/PlayerView;->d(Lcom/tkay/basead/ui/PlayerView;)Lcom/tkay/basead/ui/PlayerView$a;

    move-result-object p1

    const/16 v0, 0x4b

    invoke-interface {p1, v0}, Lcom/tkay/basead/ui/PlayerView$a;->b(I)V

    .line 160
    :cond_4
    :goto_0
    iget-object p1, p0, Lcom/tkay/basead/ui/PlayerView$1;->a:Lcom/tkay/basead/ui/PlayerView;

    invoke-static {p1}, Lcom/tkay/basead/ui/PlayerView;->o(Lcom/tkay/basead/ui/PlayerView;)Z

    move-result p1

    if-eqz p1, :cond_5

    iget-object p1, p0, Lcom/tkay/basead/ui/PlayerView$1;->a:Lcom/tkay/basead/ui/PlayerView;

    invoke-static {p1}, Lcom/tkay/basead/ui/PlayerView;->e(Lcom/tkay/basead/ui/PlayerView;)I

    move-result p1

    iget-object v0, p0, Lcom/tkay/basead/ui/PlayerView$1;->a:Lcom/tkay/basead/ui/PlayerView;

    iget v0, v0, Lcom/tkay/basead/ui/PlayerView;->a:I

    if-lt p1, v0, :cond_5

    .line 161
    iget-object p1, p0, Lcom/tkay/basead/ui/PlayerView$1;->a:Lcom/tkay/basead/ui/PlayerView;

    invoke-static {p1}, Lcom/tkay/basead/ui/PlayerView;->d(Lcom/tkay/basead/ui/PlayerView;)Lcom/tkay/basead/ui/PlayerView$a;

    move-result-object p1

    if-eqz p1, :cond_5

    .line 162
    iget-object p1, p0, Lcom/tkay/basead/ui/PlayerView$1;->a:Lcom/tkay/basead/ui/PlayerView;

    const/4 v0, 0x0

    invoke-static {p1, v0}, Lcom/tkay/basead/ui/PlayerView;->a(Lcom/tkay/basead/ui/PlayerView;Z)Z

    .line 163
    iget-object p1, p0, Lcom/tkay/basead/ui/PlayerView$1;->a:Lcom/tkay/basead/ui/PlayerView;

    invoke-static {p1}, Lcom/tkay/basead/ui/PlayerView;->d(Lcom/tkay/basead/ui/PlayerView;)Lcom/tkay/basead/ui/PlayerView$a;

    move-result-object p1

    invoke-interface {p1}, Lcom/tkay/basead/ui/PlayerView$a;->g()V

    :cond_5
    return-void
.end method
