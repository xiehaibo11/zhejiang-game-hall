.class Lcom/bianfeng/ymnsdk/sysfunc/helpers/CNAdidHelper$Inner;
.super Ljava/lang/Object;
.source "CNAdidHelper.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/bianfeng/ymnsdk/sysfunc/helpers/CNAdidHelper;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0xa
    name = "Inner"
.end annotation


# static fields
.field private static final instance:Lcom/bianfeng/ymnsdk/sysfunc/helpers/CNAdidHelper;


# direct methods
.method static constructor <clinit>()V
    .locals 2

    .line 30
    new-instance v0, Lcom/bianfeng/ymnsdk/sysfunc/helpers/CNAdidHelper;

    const/4 v1, 0x0

    invoke-direct {v0, v1}, Lcom/bianfeng/ymnsdk/sysfunc/helpers/CNAdidHelper;-><init>(Lcom/bianfeng/ymnsdk/sysfunc/helpers/CNAdidHelper$1;)V

    sput-object v0, Lcom/bianfeng/ymnsdk/sysfunc/helpers/CNAdidHelper$Inner;->instance:Lcom/bianfeng/ymnsdk/sysfunc/helpers/CNAdidHelper;

    return-void
.end method

.method private constructor <init>()V
    .locals 0

    .line 29
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method static synthetic access$000()Lcom/bianfeng/ymnsdk/sysfunc/helpers/CNAdidHelper;
    .locals 1

    .line 29
    sget-object v0, Lcom/bianfeng/ymnsdk/sysfunc/helpers/CNAdidHelper$Inner;->instance:Lcom/bianfeng/ymnsdk/sysfunc/helpers/CNAdidHelper;

    return-object v0
.end method
