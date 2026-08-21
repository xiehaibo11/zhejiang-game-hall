.class final Lcom/mbridge/msdk/advanced/b/b$1;
.super Ljava/lang/Object;
.source "NativeAdvancedShowManager.java"

# interfaces
.implements Landroid/view/View$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mbridge/msdk/advanced/b/b;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/mbridge/msdk/advanced/b/b;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/advanced/b/b;)V
    .locals 0

    .line 88
    iput-object p1, p0, Lcom/mbridge/msdk/advanced/b/b$1;->a:Lcom/mbridge/msdk/advanced/b/b;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onClick(Landroid/view/View;)V
    .locals 1

    .line 91
    iget-object p1, p0, Lcom/mbridge/msdk/advanced/b/b$1;->a:Lcom/mbridge/msdk/advanced/b/b;

    invoke-static {p1}, Lcom/mbridge/msdk/advanced/b/b;->a(Lcom/mbridge/msdk/advanced/b/b;)Z

    move-result p1

    if-eqz p1, :cond_0

    .line 92
    iget-object p1, p0, Lcom/mbridge/msdk/advanced/b/b$1;->a:Lcom/mbridge/msdk/advanced/b/b;

    const/4 v0, 0x1

    invoke-static {p1, v0}, Lcom/mbridge/msdk/advanced/b/b;->a(Lcom/mbridge/msdk/advanced/b/b;I)V

    :cond_0
    return-void
.end method
