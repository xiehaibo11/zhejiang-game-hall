.class final Lcom/tkay/basead/ui/BaseATActivity$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/core/common/b$a;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/basead/ui/BaseATActivity;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/basead/ui/BaseATActivity;


# direct methods
.method constructor <init>(Lcom/tkay/basead/ui/BaseATActivity;)V
    .locals 0

    .line 73
    iput-object p1, p0, Lcom/tkay/basead/ui/BaseATActivity$1;->a:Lcom/tkay/basead/ui/BaseATActivity;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(Ljava/lang/Object;)V
    .locals 2

    .line 76
    instance-of v0, p1, Lcom/tkay/core/common/f/x;

    if-eqz v0, :cond_2

    .line 77
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseATActivity$1;->a:Lcom/tkay/basead/ui/BaseATActivity;

    invoke-static {v0}, Lcom/tkay/basead/ui/BaseATActivity;->a(Lcom/tkay/basead/ui/BaseATActivity;)Lcom/tkay/core/common/f/h;

    move-result-object v0

    if-nez v0, :cond_0

    return-void

    .line 81
    :cond_0
    check-cast p1, Lcom/tkay/core/common/f/x;

    invoke-virtual {p1}, Lcom/tkay/core/common/f/x;->a()Lcom/tkay/core/common/f/h;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/f/h;->B()Ljava/lang/String;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/basead/ui/BaseATActivity$1;->a:Lcom/tkay/basead/ui/BaseATActivity;

    invoke-static {v1}, Lcom/tkay/basead/ui/BaseATActivity;->a(Lcom/tkay/basead/ui/BaseATActivity;)Lcom/tkay/core/common/f/h;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/f/h;->B()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_2

    .line 82
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseATActivity$1;->a:Lcom/tkay/basead/ui/BaseATActivity;

    iget-boolean v0, v0, Lcom/tkay/basead/ui/BaseATActivity;->b:Z

    if-eqz v0, :cond_1

    .line 83
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseATActivity$1;->a:Lcom/tkay/basead/ui/BaseATActivity;

    invoke-virtual {p1, v0}, Lcom/tkay/core/common/f/x;->a(Landroid/app/Activity;)V

    return-void

    .line 85
    :cond_1
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseATActivity$1;->a:Lcom/tkay/basead/ui/BaseATActivity;

    iput-object p1, v0, Lcom/tkay/basead/ui/BaseATActivity;->c:Lcom/tkay/core/common/f/x;

    :cond_2
    return-void
.end method
