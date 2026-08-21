.class public Lcom/bianfeng/ymnsdk/feature/YmnDataBuilder;
.super Ljava/lang/Object;
.source "YmnDataBuilder.java"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/bianfeng/ymnsdk/feature/YmnDataBuilder$JsonData;
    }
.end annotation


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 1
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static createJson(Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;)Lcom/bianfeng/ymnsdk/feature/YmnDataBuilder$JsonData;
    .locals 1

    .line 1
    new-instance v0, Lcom/bianfeng/ymnsdk/feature/YmnDataBuilder$JsonData;

    invoke-direct {v0, p0}, Lcom/bianfeng/ymnsdk/feature/YmnDataBuilder$JsonData;-><init>(Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;)V

    return-object v0
.end method
