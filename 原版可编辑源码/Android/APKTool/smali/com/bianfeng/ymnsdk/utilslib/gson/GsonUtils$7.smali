.class Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils$7;
.super Lcom/google/gson/reflect/TypeToken;
.source "GsonUtils.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->getLinkedHashMapFromStr(Ljava/lang/String;)Ljava/util/LinkedHashMap;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/google/gson/reflect/TypeToken<",
        "Ljava/util/LinkedHashMap<",
        "Ljava/lang/String;",
        "Ljava/lang/String;",
        ">;>;"
    }
.end annotation


# instance fields
.field final synthetic this$0:Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;


# direct methods
.method constructor <init>(Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;)V
    .locals 0
    .param p1, "this$0"    # Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;

    .line 129
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils$7;->this$0:Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;

    invoke-direct {p0}, Lcom/google/gson/reflect/TypeToken;-><init>()V

    return-void
.end method
