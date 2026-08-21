.class final Lcom/mbridge/msdk/advanced/b/a$5;
.super Ljava/lang/Object;
.source "NativeAdvancedLoadManager.java"

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mbridge/msdk/advanced/b/a;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/mbridge/msdk/advanced/b/a;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/advanced/b/a;)V
    .locals 0

    .line 173
    iput-object p1, p0, Lcom/mbridge/msdk/advanced/b/a$5;->a:Lcom/mbridge/msdk/advanced/b/a;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 4

    .line 176
    iget-object v0, p0, Lcom/mbridge/msdk/advanced/b/a$5;->a:Lcom/mbridge/msdk/advanced/b/a;

    invoke-static {v0}, Lcom/mbridge/msdk/advanced/b/a;->c(Lcom/mbridge/msdk/advanced/b/a;)Ljava/lang/String;

    move-result-object v1

    iget-object v2, p0, Lcom/mbridge/msdk/advanced/b/a$5;->a:Lcom/mbridge/msdk/advanced/b/a;

    invoke-static {v2}, Lcom/mbridge/msdk/advanced/b/a;->b(Lcom/mbridge/msdk/advanced/b/a;)I

    move-result v2

    const-string v3, "load timeout"

    invoke-static {v0, v3, v1, v2}, Lcom/mbridge/msdk/advanced/b/a;->a(Lcom/mbridge/msdk/advanced/b/a;Ljava/lang/String;Ljava/lang/String;I)V

    return-void
.end method
