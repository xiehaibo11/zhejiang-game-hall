.class final Lcom/mbridge/msdk/click/b$8;
.super Ljava/lang/Object;
.source "CommonClickControl.java"

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mbridge/msdk/click/b;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/mbridge/msdk/click/b;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/click/b;)V
    .locals 0

    .line 1675
    iput-object p1, p0, Lcom/mbridge/msdk/click/b$8;->a:Lcom/mbridge/msdk/click/b;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 3

    .line 1678
    iget-object v0, p0, Lcom/mbridge/msdk/click/b$8;->a:Lcom/mbridge/msdk/click/b;

    invoke-static {v0}, Lcom/mbridge/msdk/click/b;->h(Lcom/mbridge/msdk/click/b;)Landroid/content/Context;

    move-result-object v0

    const-string v1, "Opps!Access Unavailable"

    const/4 v2, 0x0

    invoke-static {v0, v1, v2}, Landroid/widget/Toast;->makeText(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;

    move-result-object v0

    invoke-virtual {v0}, Landroid/widget/Toast;->show()V

    return-void
.end method
