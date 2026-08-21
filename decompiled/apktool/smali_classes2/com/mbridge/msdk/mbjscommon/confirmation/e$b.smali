.class final Lcom/mbridge/msdk/mbjscommon/confirmation/e$b;
.super Ljava/lang/Object;
.source "SecondaryConfirmationManager.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mbridge/msdk/mbjscommon/confirmation/e;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = "b"
.end annotation


# static fields
.field private static final a:Lcom/mbridge/msdk/mbjscommon/confirmation/e;


# direct methods
.method static constructor <clinit>()V
    .locals 2

    .line 98
    new-instance v0, Lcom/mbridge/msdk/mbjscommon/confirmation/e;

    const/4 v1, 0x0

    invoke-direct {v0, v1}, Lcom/mbridge/msdk/mbjscommon/confirmation/e;-><init>(Lcom/mbridge/msdk/mbjscommon/confirmation/e$1;)V

    sput-object v0, Lcom/mbridge/msdk/mbjscommon/confirmation/e$b;->a:Lcom/mbridge/msdk/mbjscommon/confirmation/e;

    return-void
.end method

.method static synthetic a()Lcom/mbridge/msdk/mbjscommon/confirmation/e;
    .locals 1

    .line 97
    sget-object v0, Lcom/mbridge/msdk/mbjscommon/confirmation/e$b;->a:Lcom/mbridge/msdk/mbjscommon/confirmation/e;

    return-object v0
.end method
