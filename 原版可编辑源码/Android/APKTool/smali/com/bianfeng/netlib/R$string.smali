.class public final Lcom/bianfeng/netlib/R$string;
.super Ljava/lang/Object;
.source "R.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/bianfeng/netlib/R;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x19
    name = "string"
.end annotation


# static fields
.field public static final app_netLib_name:I

.field public static final app_thridLibrary_name:I

.field public static final app_utilsLib_name:I


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 5
    sget v0, Lcom/bianfeng/splitscreenlib/R$string;->app_netLib_name:I

    sput v0, Lcom/bianfeng/netlib/R$string;->app_netLib_name:I

    .line 6
    sget v0, Lcom/bianfeng/splitscreenlib/R$string;->app_thridLibrary_name:I

    sput v0, Lcom/bianfeng/netlib/R$string;->app_thridLibrary_name:I

    .line 7
    sget v0, Lcom/bianfeng/splitscreenlib/R$string;->app_utilsLib_name:I

    sput v0, Lcom/bianfeng/netlib/R$string;->app_utilsLib_name:I

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    .line 4
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method
