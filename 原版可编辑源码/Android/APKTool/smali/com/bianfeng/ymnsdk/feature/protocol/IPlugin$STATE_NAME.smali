.class public Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin$STATE_NAME;
.super Ljava/lang/Object;
.source "IPlugin.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x9
    name = "STATE_NAME"
.end annotation


# static fields
.field static names:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/Integer;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method static constructor <clinit>()V
    .locals 7

    .line 121
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    sput-object v0, Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin$STATE_NAME;->names:Ljava/util/Map;

    .line 130
    const-class v0, Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;

    invoke-virtual {v0}, Ljava/lang/Class;->getDeclaredFields()[Ljava/lang/reflect/Field;

    move-result-object v0

    .line 131
    .local v0, "fields":[Ljava/lang/reflect/Field;
    array-length v1, v0

    const/4 v2, 0x0

    :goto_0
    if-ge v2, v1, :cond_1

    aget-object v3, v0, v2

    .line 132
    .local v3, "field":Ljava/lang/reflect/Field;
    const/4 v4, 0x1

    invoke-virtual {v3, v4}, Ljava/lang/reflect/Field;->setAccessible(Z)V

    .line 133
    invoke-virtual {v3}, Ljava/lang/reflect/Field;->getName()Ljava/lang/String;

    move-result-object v4

    .line 134
    .local v4, "name":Ljava/lang/String;
    const-string v5, "STATE_"

    invoke-virtual {v4, v5}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v5

    if-eqz v5, :cond_0

    .line 136
    :try_start_0
    sget-object v5, Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin$STATE_NAME;->names:Ljava/util/Map;

    const/4 v6, 0x0

    invoke-virtual {v3, v6}, Ljava/lang/reflect/Field;->getInt(Ljava/lang/Object;)I

    move-result v6

    invoke-static {v6}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v6

    invoke-interface {v5, v6, v4}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;
    :try_end_0
    .catch Ljava/lang/IllegalAccessException; {:try_start_0 .. :try_end_0} :catch_0

    .line 139
    goto :goto_1

    .line 137
    :catch_0
    move-exception v5

    .line 138
    .local v5, "e":Ljava/lang/IllegalAccessException;
    invoke-virtual {v5}, Ljava/lang/IllegalAccessException;->printStackTrace()V

    .line 131
    .end local v3    # "field":Ljava/lang/reflect/Field;
    .end local v4    # "name":Ljava/lang/String;
    .end local v5    # "e":Ljava/lang/IllegalAccessException;
    :cond_0
    :goto_1
    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    .line 142
    .end local v0    # "fields":[Ljava/lang/reflect/Field;
    :cond_1
    return-void
.end method

.method public constructor <init>()V
    .locals 0

    .line 120
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static get(Ljava/lang/Integer;)Ljava/lang/String;
    .locals 2
    .param p0, "state"    # Ljava/lang/Integer;

    .line 124
    sget-object v0, Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin$STATE_NAME;->names:Ljava/util/Map;

    invoke-interface {v0, p0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/String;

    .line 125
    .local v0, "name":Ljava/lang/String;
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_0

    const-string v1, "UNSET"

    return-object v1

    .line 126
    :cond_0
    return-object v0
.end method
