.class final Lcom/mbridge/msdk/click/i$1;
.super Ljava/lang/Object;
.source "WebViewSpider.java"

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mbridge/msdk/click/i;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Landroid/content/Context;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Ljava/lang/String;

.field final synthetic b:Ljava/lang/String;

.field final synthetic c:Ljava/lang/String;

.field final synthetic d:Landroid/content/Context;

.field final synthetic e:Lcom/mbridge/msdk/click/i;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/click/i;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Landroid/content/Context;)V
    .locals 0

    .line 111
    iput-object p1, p0, Lcom/mbridge/msdk/click/i$1;->e:Lcom/mbridge/msdk/click/i;

    iput-object p2, p0, Lcom/mbridge/msdk/click/i$1;->a:Ljava/lang/String;

    iput-object p3, p0, Lcom/mbridge/msdk/click/i$1;->b:Ljava/lang/String;

    iput-object p4, p0, Lcom/mbridge/msdk/click/i$1;->c:Ljava/lang/String;

    iput-object p5, p0, Lcom/mbridge/msdk/click/i$1;->d:Landroid/content/Context;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 6

    .line 114
    iget-object v0, p0, Lcom/mbridge/msdk/click/i$1;->e:Lcom/mbridge/msdk/click/i;

    iget-object v1, p0, Lcom/mbridge/msdk/click/i$1;->a:Ljava/lang/String;

    iget-object v2, p0, Lcom/mbridge/msdk/click/i$1;->b:Ljava/lang/String;

    iget-object v3, p0, Lcom/mbridge/msdk/click/i$1;->c:Ljava/lang/String;

    iget-object v4, p0, Lcom/mbridge/msdk/click/i$1;->d:Landroid/content/Context;

    invoke-static {v0}, Lcom/mbridge/msdk/click/i;->a(Lcom/mbridge/msdk/click/i;)Ljava/lang/String;

    move-result-object v5

    invoke-static/range {v0 .. v5}, Lcom/mbridge/msdk/click/i;->a(Lcom/mbridge/msdk/click/i;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Landroid/content/Context;Ljava/lang/String;)V

    return-void
.end method
