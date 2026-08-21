.class final Lcom/tkay/expressad/videocommon/b/g$1$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/expressad/videocommon/b/g$c;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/expressad/videocommon/b/g$1;->a()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/expressad/videocommon/b/g$1;


# direct methods
.method constructor <init>(Lcom/tkay/expressad/videocommon/b/g$1;)V
    .locals 0

    .line 139
    iput-object p1, p0, Lcom/tkay/expressad/videocommon/b/g$1$1;->a:Lcom/tkay/expressad/videocommon/b/g$1;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a()V
    .locals 0

    return-void
.end method

.method public final a(Ljava/lang/String;)V
    .locals 2

    .line 173
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/videocommon/b/g$1$1;->a:Lcom/tkay/expressad/videocommon/b/g$1;

    iget-object v0, v0, Lcom/tkay/expressad/videocommon/b/g$1;->f:Lcom/tkay/expressad/videocommon/b/g;

    invoke-static {v0}, Lcom/tkay/expressad/videocommon/b/g;->b(Lcom/tkay/expressad/videocommon/b/g;)Ljava/util/concurrent/CopyOnWriteArrayList;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/expressad/videocommon/b/g$1$1;->a:Lcom/tkay/expressad/videocommon/b/g$1;

    iget-object v1, v1, Lcom/tkay/expressad/videocommon/b/g$1;->a:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/util/concurrent/CopyOnWriteArrayList;->remove(Ljava/lang/Object;)Z

    .line 174
    iget-object v0, p0, Lcom/tkay/expressad/videocommon/b/g$1$1;->a:Lcom/tkay/expressad/videocommon/b/g$1;

    iget-object v0, v0, Lcom/tkay/expressad/videocommon/b/g$1;->e:Lcom/tkay/expressad/videocommon/b/g$a;

    if-eqz v0, :cond_0

    .line 175
    iget-object v0, p0, Lcom/tkay/expressad/videocommon/b/g$1$1;->a:Lcom/tkay/expressad/videocommon/b/g$1;

    iget-object v0, v0, Lcom/tkay/expressad/videocommon/b/g$1;->e:Lcom/tkay/expressad/videocommon/b/g$a;

    iget-object v1, p0, Lcom/tkay/expressad/videocommon/b/g$1$1;->a:Lcom/tkay/expressad/videocommon/b/g$1;

    iget-object v1, v1, Lcom/tkay/expressad/videocommon/b/g$1;->a:Ljava/lang/String;

    invoke-interface {v0, v1, p1}, Lcom/tkay/expressad/videocommon/b/g$a;->a(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :cond_0
    return-void

    :catch_0
    move-exception v0

    .line 178
    sget-boolean v1, Lcom/tkay/expressad/b;->a:Z

    if-eqz v1, :cond_1

    .line 179
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 181
    :cond_1
    iget-object v0, p0, Lcom/tkay/expressad/videocommon/b/g$1$1;->a:Lcom/tkay/expressad/videocommon/b/g$1;

    iget-object v0, v0, Lcom/tkay/expressad/videocommon/b/g$1;->e:Lcom/tkay/expressad/videocommon/b/g$a;

    if-eqz v0, :cond_2

    .line 182
    iget-object v0, p0, Lcom/tkay/expressad/videocommon/b/g$1$1;->a:Lcom/tkay/expressad/videocommon/b/g$1;

    iget-object v0, v0, Lcom/tkay/expressad/videocommon/b/g$1;->e:Lcom/tkay/expressad/videocommon/b/g$a;

    iget-object v1, p0, Lcom/tkay/expressad/videocommon/b/g$1$1;->a:Lcom/tkay/expressad/videocommon/b/g$1;

    iget-object v1, v1, Lcom/tkay/expressad/videocommon/b/g$1;->a:Ljava/lang/String;

    invoke-interface {v0, v1, p1}, Lcom/tkay/expressad/videocommon/b/g$a;->a(Ljava/lang/String;Ljava/lang/String;)V

    :cond_2
    return-void
.end method

.method public final a([BLjava/lang/String;)V
    .locals 1

    .line 148
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/videocommon/b/g$1$1;->a:Lcom/tkay/expressad/videocommon/b/g$1;

    iget-object v0, v0, Lcom/tkay/expressad/videocommon/b/g$1;->f:Lcom/tkay/expressad/videocommon/b/g;

    invoke-static {v0}, Lcom/tkay/expressad/videocommon/b/g;->b(Lcom/tkay/expressad/videocommon/b/g;)Ljava/util/concurrent/CopyOnWriteArrayList;

    move-result-object v0

    invoke-virtual {v0, p2}, Ljava/util/concurrent/CopyOnWriteArrayList;->remove(Ljava/lang/Object;)Z

    if-eqz p1, :cond_2

    .line 149
    array-length v0, p1

    if-lez v0, :cond_2

    .line 150
    iget-object v0, p0, Lcom/tkay/expressad/videocommon/b/g$1$1;->a:Lcom/tkay/expressad/videocommon/b/g$1;

    iget-object v0, v0, Lcom/tkay/expressad/videocommon/b/g$1;->f:Lcom/tkay/expressad/videocommon/b/g;

    invoke-static {v0}, Lcom/tkay/expressad/videocommon/b/g;->a(Lcom/tkay/expressad/videocommon/b/g;)Lcom/tkay/expressad/videocommon/b/h;

    move-result-object v0

    invoke-virtual {v0, p2, p1}, Lcom/tkay/expressad/videocommon/b/h;->a(Ljava/lang/String;[B)Z

    move-result p1

    if-eqz p1, :cond_1

    .line 151
    iget-object p1, p0, Lcom/tkay/expressad/videocommon/b/g$1$1;->a:Lcom/tkay/expressad/videocommon/b/g$1;

    iget-object p1, p1, Lcom/tkay/expressad/videocommon/b/g$1;->e:Lcom/tkay/expressad/videocommon/b/g$a;

    if-eqz p1, :cond_0

    .line 152
    iget-object p1, p0, Lcom/tkay/expressad/videocommon/b/g$1$1;->a:Lcom/tkay/expressad/videocommon/b/g$1;

    iget-object p1, p1, Lcom/tkay/expressad/videocommon/b/g$1;->e:Lcom/tkay/expressad/videocommon/b/g$a;

    invoke-interface {p1, p2}, Lcom/tkay/expressad/videocommon/b/g$a;->a(Ljava/lang/String;)V

    :cond_0
    return-void

    .line 156
    :cond_1
    iget-object p1, p0, Lcom/tkay/expressad/videocommon/b/g$1$1;->a:Lcom/tkay/expressad/videocommon/b/g$1;

    iget-object p1, p1, Lcom/tkay/expressad/videocommon/b/g$1;->e:Lcom/tkay/expressad/videocommon/b/g$a;

    if-eqz p1, :cond_2

    .line 157
    iget-object p1, p0, Lcom/tkay/expressad/videocommon/b/g$1$1;->a:Lcom/tkay/expressad/videocommon/b/g$1;

    iget-object p1, p1, Lcom/tkay/expressad/videocommon/b/g$1;->e:Lcom/tkay/expressad/videocommon/b/g$a;

    const-string v0, "save file failed"

    invoke-interface {p1, p2, v0}, Lcom/tkay/expressad/videocommon/b/g$a;->a(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :cond_2
    return-void

    :catch_0
    move-exception p1

    .line 161
    sget-boolean v0, Lcom/tkay/expressad/b;->a:Z

    if-eqz v0, :cond_3

    .line 162
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    .line 164
    :cond_3
    iget-object v0, p0, Lcom/tkay/expressad/videocommon/b/g$1$1;->a:Lcom/tkay/expressad/videocommon/b/g$1;

    iget-object v0, v0, Lcom/tkay/expressad/videocommon/b/g$1;->e:Lcom/tkay/expressad/videocommon/b/g$a;

    if-eqz v0, :cond_4

    .line 165
    iget-object v0, p0, Lcom/tkay/expressad/videocommon/b/g$1$1;->a:Lcom/tkay/expressad/videocommon/b/g$1;

    iget-object v0, v0, Lcom/tkay/expressad/videocommon/b/g$1;->e:Lcom/tkay/expressad/videocommon/b/g$a;

    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-interface {v0, p2, p1}, Lcom/tkay/expressad/videocommon/b/g$a;->a(Ljava/lang/String;Ljava/lang/String;)V

    :cond_4
    return-void
.end method
