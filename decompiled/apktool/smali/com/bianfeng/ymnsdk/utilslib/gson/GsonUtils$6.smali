.class Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils$6;
.super Lcom/google/gson/reflect/TypeToken;
.source "GsonUtils.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->getListFrom(Ljava/lang/Object;)Ljava/util/List;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/google/gson/reflect/TypeToken<",
        "Ljava/util/List<",
        "TT;>;>;"
    }
.end annotation


# instance fields
.field final synthetic this$0:Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;


# direct methods
.method constructor <init>(Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;)V
    .locals 0
    .param p1, "this$0"    # Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;

    .line 114
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils$6;->this$0:Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;

    invoke-direct {p0}, Lcom/google/gson/reflect/TypeToken;-><init>()V

    return-void
.end method
