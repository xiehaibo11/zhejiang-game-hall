.class final Lcom/mbridge/msdk/foundation/tools/o$a;
.super Ljava/lang/Object;
.source "MIMManager.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mbridge/msdk/foundation/tools/o;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x1a
    name = "a"
.end annotation


# static fields
.field private static final a:Lcom/mbridge/msdk/foundation/tools/o;


# direct methods
.method static constructor <clinit>()V
    .locals 2

    .line 226
    new-instance v0, Lcom/mbridge/msdk/foundation/tools/o;

    const/4 v1, 0x0

    invoke-direct {v0, v1}, Lcom/mbridge/msdk/foundation/tools/o;-><init>(Lcom/mbridge/msdk/foundation/tools/o$1;)V

    sput-object v0, Lcom/mbridge/msdk/foundation/tools/o$a;->a:Lcom/mbridge/msdk/foundation/tools/o;

    return-void
.end method

.method static synthetic a()Lcom/mbridge/msdk/foundation/tools/o;
    .locals 1

    .line 225
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/o$a;->a:Lcom/mbridge/msdk/foundation/tools/o;

    return-object v0
.end method
