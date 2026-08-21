.class final Lcom/mbridge/msdk/splash/c/c$2;
.super Ljava/lang/Object;
.source "SplashLoadManager.java"

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mbridge/msdk/splash/c/c;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/mbridge/msdk/splash/c/c;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/splash/c/c;)V
    .locals 0

    .line 119
    iput-object p1, p0, Lcom/mbridge/msdk/splash/c/c$2;->a:Lcom/mbridge/msdk/splash/c/c;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 4

    .line 122
    iget-object v0, p0, Lcom/mbridge/msdk/splash/c/c$2;->a:Lcom/mbridge/msdk/splash/c/c;

    invoke-static {v0}, Lcom/mbridge/msdk/splash/c/c;->a(Lcom/mbridge/msdk/splash/c/c;)Ljava/lang/String;

    move-result-object v1

    iget-object v2, p0, Lcom/mbridge/msdk/splash/c/c$2;->a:Lcom/mbridge/msdk/splash/c/c;

    invoke-static {v2}, Lcom/mbridge/msdk/splash/c/c;->b(Lcom/mbridge/msdk/splash/c/c;)I

    move-result v2

    const-string v3, "load timeout"

    invoke-static {v0, v3, v1, v2}, Lcom/mbridge/msdk/splash/c/c;->a(Lcom/mbridge/msdk/splash/c/c;Ljava/lang/String;Ljava/lang/String;I)V

    return-void
.end method
