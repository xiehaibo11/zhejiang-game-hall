.class final Lcom/tkay/basead/ui/FullScreenATView$1;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/view/View$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/basead/ui/FullScreenATView;->I()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/basead/ui/FullScreenATView;


# direct methods
.method constructor <init>(Lcom/tkay/basead/ui/FullScreenATView;)V
    .locals 0

    .line 140
    iput-object p1, p0, Lcom/tkay/basead/ui/FullScreenATView$1;->a:Lcom/tkay/basead/ui/FullScreenATView;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onClick(Landroid/view/View;)V
    .locals 1

    .line 143
    iget-object p1, p0, Lcom/tkay/basead/ui/FullScreenATView$1;->a:Lcom/tkay/basead/ui/FullScreenATView;

    const/4 v0, 0x1

    invoke-virtual {p1, v0}, Lcom/tkay/basead/ui/FullScreenATView;->b(I)V

    return-void
.end method
