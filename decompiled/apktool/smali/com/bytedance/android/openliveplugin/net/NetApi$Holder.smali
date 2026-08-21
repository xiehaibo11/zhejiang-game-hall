.class final Lcom/bytedance/android/openliveplugin/net/NetApi$Holder;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/bytedance/android/openliveplugin/net/NetApi;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x1a
    name = "Holder"
.end annotation


# static fields
.field private static final INSTANCE:Lcom/bytedance/android/openliveplugin/net/NetApi;


# direct methods
.method static constructor <clinit>()V
    .locals 2

    .line 40
    new-instance v0, Lcom/bytedance/android/openliveplugin/net/NetApi;

    const/4 v1, 0x0

    invoke-direct {v0, v1}, Lcom/bytedance/android/openliveplugin/net/NetApi;-><init>(Lcom/bytedance/android/openliveplugin/net/NetApi$1;)V

    sput-object v0, Lcom/bytedance/android/openliveplugin/net/NetApi$Holder;->INSTANCE:Lcom/bytedance/android/openliveplugin/net/NetApi;

    return-void
.end method

.method private constructor <init>()V
    .locals 0

    .line 39
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method static synthetic access$100()Lcom/bytedance/android/openliveplugin/net/NetApi;
    .locals 1

    .line 39
    sget-object v0, Lcom/bytedance/android/openliveplugin/net/NetApi$Holder;->INSTANCE:Lcom/bytedance/android/openliveplugin/net/NetApi;

    return-object v0
.end method
