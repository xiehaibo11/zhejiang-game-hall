.class final Lcom/qq/e/comm/managers/b$a;
.super Ljava/lang/Object;
.source ""


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/qq/e/comm/managers/b;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x1a
    name = "a"
.end annotation


# static fields
.field private static a:Lcom/qq/e/comm/managers/b;


# direct methods
.method static constructor <clinit>()V
    .locals 2

    new-instance v0, Lcom/qq/e/comm/managers/b;

    const/4 v1, 0x0

    invoke-direct {v0, v1}, Lcom/qq/e/comm/managers/b;-><init>(Lcom/qq/e/comm/managers/a;)V

    sput-object v0, Lcom/qq/e/comm/managers/b$a;->a:Lcom/qq/e/comm/managers/b;

    return-void
.end method

.method static synthetic a()Lcom/qq/e/comm/managers/b;
    .locals 1

    sget-object v0, Lcom/qq/e/comm/managers/b$a;->a:Lcom/qq/e/comm/managers/b;

    return-object v0
.end method
