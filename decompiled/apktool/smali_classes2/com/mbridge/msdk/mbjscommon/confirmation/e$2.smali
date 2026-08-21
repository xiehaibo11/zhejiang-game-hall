.class final Lcom/mbridge/msdk/mbjscommon/confirmation/e$2;
.super Ljava/util/TimerTask;
.source "SecondaryConfirmationManager.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mbridge/msdk/mbjscommon/confirmation/e;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/mbridge/msdk/mbjscommon/confirmation/e;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/mbjscommon/confirmation/e;)V
    .locals 0

    .line 130
    iput-object p1, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/e$2;->a:Lcom/mbridge/msdk/mbjscommon/confirmation/e;

    invoke-direct {p0}, Ljava/util/TimerTask;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 2

    .line 133
    iget-object v0, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/e$2;->a:Lcom/mbridge/msdk/mbjscommon/confirmation/e;

    const/4 v1, 0x0

    invoke-static {v0, v1}, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->a(Lcom/mbridge/msdk/mbjscommon/confirmation/e;Z)Z

    return-void
.end method
