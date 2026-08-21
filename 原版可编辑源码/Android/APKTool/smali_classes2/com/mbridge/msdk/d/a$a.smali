.class final Lcom/mbridge/msdk/d/a$a;
.super Ljava/lang/Object;
.source "ShortCutsDataManager.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mbridge/msdk/d/a;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0xa
    name = "a"
.end annotation


# static fields
.field private static a:Lcom/mbridge/msdk/d/a;


# direct methods
.method static constructor <clinit>()V
    .locals 2

    .line 48
    new-instance v0, Lcom/mbridge/msdk/d/a;

    const/4 v1, 0x0

    invoke-direct {v0, v1}, Lcom/mbridge/msdk/d/a;-><init>(Lcom/mbridge/msdk/d/a$1;)V

    sput-object v0, Lcom/mbridge/msdk/d/a$a;->a:Lcom/mbridge/msdk/d/a;

    return-void
.end method

.method static synthetic a()Lcom/mbridge/msdk/d/a;
    .locals 1

    .line 47
    sget-object v0, Lcom/mbridge/msdk/d/a$a;->a:Lcom/mbridge/msdk/d/a;

    return-object v0
.end method
