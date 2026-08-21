.class final Lcom/tkay/expressad/video/dynview/j/a$3;
.super Lcom/tkay/expressad/widget/a;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/expressad/video/dynview/j/a;->a(Lcom/tkay/expressad/video/dynview/c;Landroid/view/View;Ljava/util/Map;Lcom/tkay/expressad/video/dynview/f/e;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Ljava/util/Map;

.field final synthetic b:Ljava/util/List;

.field final synthetic c:Lcom/tkay/expressad/video/dynview/j/a;


# direct methods
.method constructor <init>(Lcom/tkay/expressad/video/dynview/j/a;Ljava/util/Map;Ljava/util/List;)V
    .locals 0

    .line 178
    iput-object p1, p0, Lcom/tkay/expressad/video/dynview/j/a$3;->c:Lcom/tkay/expressad/video/dynview/j/a;

    iput-object p2, p0, Lcom/tkay/expressad/video/dynview/j/a$3;->a:Ljava/util/Map;

    iput-object p3, p0, Lcom/tkay/expressad/video/dynview/j/a$3;->b:Ljava/util/List;

    invoke-direct {p0}, Lcom/tkay/expressad/widget/a;-><init>()V

    return-void
.end method


# virtual methods
.method protected final a(Landroid/view/View;)V
    .locals 3

    .line 181
    iget-object p1, p0, Lcom/tkay/expressad/video/dynview/j/a$3;->c:Lcom/tkay/expressad/video/dynview/j/a;

    invoke-static {p1}, Lcom/tkay/expressad/video/dynview/j/a;->e(Lcom/tkay/expressad/video/dynview/j/a;)Z

    move-result p1

    if-nez p1, :cond_0

    .line 182
    iget-object p1, p0, Lcom/tkay/expressad/video/dynview/j/a$3;->c:Lcom/tkay/expressad/video/dynview/j/a;

    invoke-static {p1}, Lcom/tkay/expressad/video/dynview/j/a;->f(Lcom/tkay/expressad/video/dynview/j/a;)Z

    .line 183
    iget-object p1, p0, Lcom/tkay/expressad/video/dynview/j/a$3;->c:Lcom/tkay/expressad/video/dynview/j/a;

    iget-object v0, p0, Lcom/tkay/expressad/video/dynview/j/a$3;->a:Ljava/util/Map;

    iget-object v1, p0, Lcom/tkay/expressad/video/dynview/j/a$3;->b:Ljava/util/List;

    const/4 v2, 0x0

    invoke-static {p1, v0, v1, v2}, Lcom/tkay/expressad/video/dynview/j/a;->a(Lcom/tkay/expressad/video/dynview/j/a;Ljava/util/Map;Ljava/util/List;I)V

    :cond_0
    return-void
.end method
