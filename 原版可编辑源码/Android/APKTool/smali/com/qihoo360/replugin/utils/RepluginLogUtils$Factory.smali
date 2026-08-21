.class final Lcom/qihoo360/replugin/utils/RepluginLogUtils$Factory;
.super Ljava/lang/Object;
.source "RepluginLogUtils.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/qihoo360/replugin/utils/RepluginLogUtils;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x1a
    name = "Factory"
.end annotation


# static fields
.field private static final instance:Lcom/qihoo360/replugin/utils/RepluginLogUtils;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 28
    new-instance v0, Lcom/qihoo360/replugin/utils/RepluginLogUtils;

    invoke-direct {v0}, Lcom/qihoo360/replugin/utils/RepluginLogUtils;-><init>()V

    sput-object v0, Lcom/qihoo360/replugin/utils/RepluginLogUtils$Factory;->instance:Lcom/qihoo360/replugin/utils/RepluginLogUtils;

    return-void
.end method

.method private constructor <init>()V
    .locals 0

    .line 27
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method static synthetic access$000()Lcom/qihoo360/replugin/utils/RepluginLogUtils;
    .locals 1

    .line 27
    sget-object v0, Lcom/qihoo360/replugin/utils/RepluginLogUtils$Factory;->instance:Lcom/qihoo360/replugin/utils/RepluginLogUtils;

    return-object v0
.end method
