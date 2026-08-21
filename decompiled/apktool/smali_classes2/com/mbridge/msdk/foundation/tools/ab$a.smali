.class final Lcom/mbridge/msdk/foundation/tools/ab$a;
.super Ljava/lang/Object;
.source "SameOptimizedController.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mbridge/msdk/foundation/tools/ab;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x1a
    name = "a"
.end annotation


# static fields
.field private static final a:Lcom/mbridge/msdk/foundation/tools/ab;


# direct methods
.method static constructor <clinit>()V
    .locals 2

    .line 338
    new-instance v0, Lcom/mbridge/msdk/foundation/tools/ab;

    const/4 v1, 0x0

    invoke-direct {v0, v1}, Lcom/mbridge/msdk/foundation/tools/ab;-><init>(Lcom/mbridge/msdk/foundation/tools/ab$1;)V

    sput-object v0, Lcom/mbridge/msdk/foundation/tools/ab$a;->a:Lcom/mbridge/msdk/foundation/tools/ab;

    return-void
.end method

.method static synthetic a()Lcom/mbridge/msdk/foundation/tools/ab;
    .locals 1

    .line 337
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/ab$a;->a:Lcom/mbridge/msdk/foundation/tools/ab;

    return-object v0
.end method
