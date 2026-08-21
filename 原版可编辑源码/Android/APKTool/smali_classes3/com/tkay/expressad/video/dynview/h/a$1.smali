.class final Lcom/tkay/expressad/video/dynview/h/a$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/expressad/video/dynview/f/e;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/expressad/video/dynview/h/a;->a(Lcom/tkay/expressad/video/dynview/c;Lcom/tkay/expressad/video/dynview/f/h;Ljava/util/Map;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/expressad/video/dynview/f/h;

.field final synthetic b:Lcom/tkay/expressad/video/dynview/h/a;


# direct methods
.method constructor <init>(Lcom/tkay/expressad/video/dynview/h/a;Lcom/tkay/expressad/video/dynview/f/h;)V
    .locals 0

    .line 90
    iput-object p1, p0, Lcom/tkay/expressad/video/dynview/h/a$1;->b:Lcom/tkay/expressad/video/dynview/h/a;

    iput-object p2, p0, Lcom/tkay/expressad/video/dynview/h/a$1;->a:Lcom/tkay/expressad/video/dynview/f/h;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(Landroid/view/View;Ljava/util/List;)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/view/View;",
            "Ljava/util/List<",
            "Landroid/view/View;",
            ">;)V"
        }
    .end annotation

    .line 93
    new-instance v0, Lcom/tkay/expressad/video/dynview/a;

    invoke-direct {v0}, Lcom/tkay/expressad/video/dynview/a;-><init>()V

    .line 94
    invoke-virtual {v0, p1}, Lcom/tkay/expressad/video/dynview/a;->a(Landroid/view/View;)V

    .line 95
    invoke-virtual {v0, p2}, Lcom/tkay/expressad/video/dynview/a;->a(Ljava/util/List;)V

    .line 96
    invoke-virtual {v0}, Lcom/tkay/expressad/video/dynview/a;->d()V

    .line 98
    iget-object p1, p0, Lcom/tkay/expressad/video/dynview/h/a$1;->a:Lcom/tkay/expressad/video/dynview/f/h;

    invoke-interface {p1, v0}, Lcom/tkay/expressad/video/dynview/f/h;->a(Lcom/tkay/expressad/video/dynview/a;)V

    return-void
.end method

.method public final a(Lcom/tkay/expressad/video/dynview/c/b;)V
    .locals 1

    .line 103
    iget-object v0, p0, Lcom/tkay/expressad/video/dynview/h/a$1;->a:Lcom/tkay/expressad/video/dynview/f/h;

    invoke-interface {v0, p1}, Lcom/tkay/expressad/video/dynview/f/h;->a(Lcom/tkay/expressad/video/dynview/c/b;)V

    return-void
.end method
