.class final Lcom/tkay/expressad/video/dynview/j/a$9;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/view/View$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/expressad/video/dynview/j/a;->c(Lcom/tkay/expressad/video/dynview/c;Landroid/view/View;Ljava/util/Map;Lcom/tkay/expressad/video/dynview/f/e;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Ljava/util/Map;

.field final synthetic b:Lcom/tkay/expressad/video/dynview/j/a;


# direct methods
.method constructor <init>(Lcom/tkay/expressad/video/dynview/j/a;Ljava/util/Map;)V
    .locals 0

    .line 580
    iput-object p1, p0, Lcom/tkay/expressad/video/dynview/j/a$9;->b:Lcom/tkay/expressad/video/dynview/j/a;

    iput-object p2, p0, Lcom/tkay/expressad/video/dynview/j/a$9;->a:Ljava/util/Map;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onClick(Landroid/view/View;)V
    .locals 1

    .line 583
    iget-object p1, p0, Lcom/tkay/expressad/video/dynview/j/a$9;->b:Lcom/tkay/expressad/video/dynview/j/a;

    iget-object v0, p0, Lcom/tkay/expressad/video/dynview/j/a$9;->a:Ljava/util/Map;

    invoke-static {p1, v0}, Lcom/tkay/expressad/video/dynview/j/a;->b(Lcom/tkay/expressad/video/dynview/j/a;Ljava/util/Map;)V

    return-void
.end method
