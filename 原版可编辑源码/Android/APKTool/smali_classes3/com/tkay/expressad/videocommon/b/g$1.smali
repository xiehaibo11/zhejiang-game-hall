.class final Lcom/tkay/expressad/videocommon/b/g$1;
.super Lcom/tkay/expressad/foundation/g/g/a;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/expressad/videocommon/b/g;->c(Ljava/lang/String;Lcom/tkay/expressad/videocommon/b/g$a;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Ljava/lang/String;

.field final synthetic e:Lcom/tkay/expressad/videocommon/b/g$a;

.field final synthetic f:Lcom/tkay/expressad/videocommon/b/g;


# direct methods
.method constructor <init>(Lcom/tkay/expressad/videocommon/b/g;Ljava/lang/String;Lcom/tkay/expressad/videocommon/b/g$a;)V
    .locals 0

    .line 130
    iput-object p1, p0, Lcom/tkay/expressad/videocommon/b/g$1;->f:Lcom/tkay/expressad/videocommon/b/g;

    iput-object p2, p0, Lcom/tkay/expressad/videocommon/b/g$1;->a:Ljava/lang/String;

    iput-object p3, p0, Lcom/tkay/expressad/videocommon/b/g$1;->e:Lcom/tkay/expressad/videocommon/b/g$a;

    invoke-direct {p0}, Lcom/tkay/expressad/foundation/g/g/a;-><init>()V

    return-void
.end method


# virtual methods
.method public final a()V
    .locals 2

    .line 133
    iget-object v0, p0, Lcom/tkay/expressad/videocommon/b/g$1;->f:Lcom/tkay/expressad/videocommon/b/g;

    invoke-static {v0}, Lcom/tkay/expressad/videocommon/b/g;->a(Lcom/tkay/expressad/videocommon/b/g;)Lcom/tkay/expressad/videocommon/b/h;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/expressad/videocommon/b/g$1;->a:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/videocommon/b/h;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 134
    iget-object v0, p0, Lcom/tkay/expressad/videocommon/b/g$1;->f:Lcom/tkay/expressad/videocommon/b/g;

    invoke-static {v0}, Lcom/tkay/expressad/videocommon/b/g;->b(Lcom/tkay/expressad/videocommon/b/g;)Ljava/util/concurrent/CopyOnWriteArrayList;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/expressad/videocommon/b/g$1;->a:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/util/concurrent/CopyOnWriteArrayList;->remove(Ljava/lang/Object;)Z

    .line 135
    iget-object v0, p0, Lcom/tkay/expressad/videocommon/b/g$1;->e:Lcom/tkay/expressad/videocommon/b/g$a;

    if-eqz v0, :cond_1

    .line 136
    iget-object v1, p0, Lcom/tkay/expressad/videocommon/b/g$1;->a:Ljava/lang/String;

    invoke-interface {v0, v1}, Lcom/tkay/expressad/videocommon/b/g$a;->a(Ljava/lang/String;)V

    return-void

    .line 139
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/videocommon/b/g$1;->a:Ljava/lang/String;

    new-instance v1, Lcom/tkay/expressad/videocommon/b/g$1$1;

    invoke-direct {v1, p0}, Lcom/tkay/expressad/videocommon/b/g$1$1;-><init>(Lcom/tkay/expressad/videocommon/b/g$1;)V

    invoke-static {v0, v1}, Lcom/tkay/expressad/videocommon/b/e;->a(Ljava/lang/String;Lcom/tkay/expressad/videocommon/b/g$c;)V

    :cond_1
    return-void
.end method

.method public final b()V
    .locals 0

    return-void
.end method

.method public final c()V
    .locals 0

    return-void
.end method
