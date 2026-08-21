.class Lcom/bianfeng/thridlibrary/GsonUtils$2;
.super Lcom/google/gson/reflect/TypeToken;
.source "GsonUtils.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/bianfeng/thridlibrary/GsonUtils;->fromJsonWithObject(Ljava/lang/String;)Ljava/util/Map;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/google/gson/reflect/TypeToken<",
        "Ljava/util/Map<",
        "Ljava/lang/String;",
        "Ljava/lang/Object;",
        ">;>;"
    }
.end annotation


# instance fields
.field final synthetic this$0:Lcom/bianfeng/thridlibrary/GsonUtils;


# direct methods
.method constructor <init>(Lcom/bianfeng/thridlibrary/GsonUtils;)V
    .locals 0

    .line 41
    iput-object p1, p0, Lcom/bianfeng/thridlibrary/GsonUtils$2;->this$0:Lcom/bianfeng/thridlibrary/GsonUtils;

    invoke-direct {p0}, Lcom/google/gson/reflect/TypeToken;-><init>()V

    return-void
.end method
