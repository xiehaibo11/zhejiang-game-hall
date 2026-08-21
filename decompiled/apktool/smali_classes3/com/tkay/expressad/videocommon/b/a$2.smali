.class final Lcom/tkay/expressad/videocommon/b/a$2;
.super Landroid/os/Handler;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/expressad/videocommon/b/a;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/expressad/videocommon/b/a;


# direct methods
.method constructor <init>(Lcom/tkay/expressad/videocommon/b/a;Landroid/os/Looper;)V
    .locals 0

    .line 133
    iput-object p1, p0, Lcom/tkay/expressad/videocommon/b/a$2;->a:Lcom/tkay/expressad/videocommon/b/a;

    invoke-direct {p0, p2}, Landroid/os/Handler;-><init>(Landroid/os/Looper;)V

    return-void
.end method


# virtual methods
.method public final handleMessage(Landroid/os/Message;)V
    .locals 5

    .line 138
    iget v0, p1, Landroid/os/Message;->what:I

    const/4 v1, 0x1

    if-eq v0, v1, :cond_6

    const/4 v1, 0x2

    if-eq v0, v1, :cond_4

    const/4 v2, 0x3

    const/4 v3, 0x5

    const/4 v4, 0x4

    if-eq v0, v2, :cond_3

    if-eq v0, v4, :cond_2

    if-eq v0, v3, :cond_1

    const/16 v1, 0x271a

    if-eq v0, v1, :cond_0

    goto :goto_0

    .line 165
    :cond_0
    iget-object p1, p1, Landroid/os/Message;->obj:Ljava/lang/Object;

    if-eqz p1, :cond_5

    .line 168
    invoke-static {}, Lcom/tkay/expressad/videocommon/b/a;->s()V

    goto :goto_0

    .line 162
    :cond_1
    iget-object p1, p0, Lcom/tkay/expressad/videocommon/b/a$2;->a:Lcom/tkay/expressad/videocommon/b/a;

    invoke-virtual {p1}, Lcom/tkay/expressad/videocommon/b/a;->h()V

    return-void

    .line 157
    :cond_2
    iget-object p1, p0, Lcom/tkay/expressad/videocommon/b/a$2;->a:Lcom/tkay/expressad/videocommon/b/a;

    invoke-static {p1, v3}, Lcom/tkay/expressad/videocommon/b/a;->a(Lcom/tkay/expressad/videocommon/b/a;I)I

    .line 158
    iget-object p1, p0, Lcom/tkay/expressad/videocommon/b/a$2;->a:Lcom/tkay/expressad/videocommon/b/a;

    invoke-static {p1}, Lcom/tkay/expressad/videocommon/b/a;->d(Lcom/tkay/expressad/videocommon/b/a;)Z

    .line 159
    iget-object p1, p0, Lcom/tkay/expressad/videocommon/b/a$2;->a:Lcom/tkay/expressad/videocommon/b/a;

    invoke-static {p1}, Lcom/tkay/expressad/videocommon/b/a;->b(Lcom/tkay/expressad/videocommon/b/a;)J

    move-result-wide v0

    iget-object v2, p0, Lcom/tkay/expressad/videocommon/b/a$2;->a:Lcom/tkay/expressad/videocommon/b/a;

    invoke-static {v2}, Lcom/tkay/expressad/videocommon/b/a;->c(Lcom/tkay/expressad/videocommon/b/a;)I

    move-result v2

    invoke-static {p1, v0, v1, v2}, Lcom/tkay/expressad/videocommon/b/a;->a(Lcom/tkay/expressad/videocommon/b/a;JI)V

    return-void

    .line 150
    :cond_3
    iget-object p1, p0, Lcom/tkay/expressad/videocommon/b/a$2;->a:Lcom/tkay/expressad/videocommon/b/a;

    invoke-static {p1}, Lcom/tkay/expressad/videocommon/b/a;->c(Lcom/tkay/expressad/videocommon/b/a;)I

    move-result p1

    if-eq p1, v4, :cond_5

    iget-object p1, p0, Lcom/tkay/expressad/videocommon/b/a$2;->a:Lcom/tkay/expressad/videocommon/b/a;

    invoke-static {p1}, Lcom/tkay/expressad/videocommon/b/a;->c(Lcom/tkay/expressad/videocommon/b/a;)I

    move-result p1

    if-eq p1, v1, :cond_5

    iget-object p1, p0, Lcom/tkay/expressad/videocommon/b/a$2;->a:Lcom/tkay/expressad/videocommon/b/a;

    .line 151
    invoke-static {p1}, Lcom/tkay/expressad/videocommon/b/a;->c(Lcom/tkay/expressad/videocommon/b/a;)I

    move-result p1

    if-eq p1, v3, :cond_5

    .line 152
    iget-object p1, p0, Lcom/tkay/expressad/videocommon/b/a$2;->a:Lcom/tkay/expressad/videocommon/b/a;

    invoke-static {p1, v4}, Lcom/tkay/expressad/videocommon/b/a;->a(Lcom/tkay/expressad/videocommon/b/a;I)I

    .line 153
    iget-object p1, p0, Lcom/tkay/expressad/videocommon/b/a$2;->a:Lcom/tkay/expressad/videocommon/b/a;

    invoke-static {p1}, Lcom/tkay/expressad/videocommon/b/a;->b(Lcom/tkay/expressad/videocommon/b/a;)J

    move-result-wide v0

    iget-object v2, p0, Lcom/tkay/expressad/videocommon/b/a$2;->a:Lcom/tkay/expressad/videocommon/b/a;

    invoke-static {v2}, Lcom/tkay/expressad/videocommon/b/a;->c(Lcom/tkay/expressad/videocommon/b/a;)I

    move-result v2

    invoke-static {p1, v0, v1, v2}, Lcom/tkay/expressad/videocommon/b/a;->a(Lcom/tkay/expressad/videocommon/b/a;JI)V

    return-void

    .line 144
    :cond_4
    iget-object p1, p0, Lcom/tkay/expressad/videocommon/b/a$2;->a:Lcom/tkay/expressad/videocommon/b/a;

    invoke-static {p1}, Lcom/tkay/expressad/videocommon/b/a;->c(Lcom/tkay/expressad/videocommon/b/a;)I

    move-result p1

    if-eq p1, v1, :cond_5

    .line 145
    iget-object p1, p0, Lcom/tkay/expressad/videocommon/b/a$2;->a:Lcom/tkay/expressad/videocommon/b/a;

    invoke-static {p1, v1}, Lcom/tkay/expressad/videocommon/b/a;->a(Lcom/tkay/expressad/videocommon/b/a;I)I

    .line 146
    iget-object p1, p0, Lcom/tkay/expressad/videocommon/b/a$2;->a:Lcom/tkay/expressad/videocommon/b/a;

    invoke-static {p1}, Lcom/tkay/expressad/videocommon/b/a;->b(Lcom/tkay/expressad/videocommon/b/a;)J

    move-result-wide v0

    iget-object v2, p0, Lcom/tkay/expressad/videocommon/b/a$2;->a:Lcom/tkay/expressad/videocommon/b/a;

    invoke-static {v2}, Lcom/tkay/expressad/videocommon/b/a;->c(Lcom/tkay/expressad/videocommon/b/a;)I

    move-result v2

    invoke-static {p1, v0, v1, v2}, Lcom/tkay/expressad/videocommon/b/a;->a(Lcom/tkay/expressad/videocommon/b/a;JI)V

    :cond_5
    :goto_0
    return-void

    .line 140
    :cond_6
    iget-object p1, p0, Lcom/tkay/expressad/videocommon/b/a$2;->a:Lcom/tkay/expressad/videocommon/b/a;

    invoke-static {p1}, Lcom/tkay/expressad/videocommon/b/a;->b(Lcom/tkay/expressad/videocommon/b/a;)J

    move-result-wide v0

    iget-object v2, p0, Lcom/tkay/expressad/videocommon/b/a$2;->a:Lcom/tkay/expressad/videocommon/b/a;

    invoke-static {v2}, Lcom/tkay/expressad/videocommon/b/a;->c(Lcom/tkay/expressad/videocommon/b/a;)I

    move-result v2

    invoke-static {p1, v0, v1, v2}, Lcom/tkay/expressad/videocommon/b/a;->a(Lcom/tkay/expressad/videocommon/b/a;JI)V

    return-void
.end method
