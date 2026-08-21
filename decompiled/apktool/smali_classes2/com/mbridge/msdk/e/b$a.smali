.class final Lcom/mbridge/msdk/e/b$a;
.super Ljava/lang/Object;
.source "TimerController.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mbridge/msdk/e/b;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = "a"
.end annotation


# static fields
.field static a:Lcom/mbridge/msdk/e/b;


# direct methods
.method static constructor <clinit>()V
    .locals 2

    .line 17
    new-instance v0, Lcom/mbridge/msdk/e/b;

    const/4 v1, 0x0

    invoke-direct {v0, v1}, Lcom/mbridge/msdk/e/b;-><init>(Lcom/mbridge/msdk/e/b$1;)V

    sput-object v0, Lcom/mbridge/msdk/e/b$a;->a:Lcom/mbridge/msdk/e/b;

    return-void
.end method
