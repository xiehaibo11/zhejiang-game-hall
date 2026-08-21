#if (MAX_DIRECTIONAL_LIGHT_NUM > 0)
    uniform vec3 u_DirLightSourceColor[MAX_DIRECTIONAL_LIGHT_NUM];
#endif
#if (MAX_POINT_LIGHT_NUM > 0)
    uniform vec3 u_PointLightSourceColor[MAX_POINT_LIGHT_NUM];
#endif
#if (MAX_SPOT_LIGHT_NUM > 0)
    uniform vec3 u_SpotLightSourceColor[MAX_SPOT_LIGHT_NUM];
#endif
uniform vec3 u_AmbientLightSourceColor;

#ifdef GL_ES
    varying mediump vec2 TextureCoordOut;
    varying mediump vec3 viewDirection;

    #if (MAX_DIRECTIONAL_LIGHT_NUM > 0)
        varying mediump vec3 dirLightDirection[MAX_DIRECTIONAL_LIGHT_NUM];
    #endif
    #if (MAX_POINT_LIGHT_NUM > 0)
        varying mediump vec3 pointLightDirection[MAX_POINT_LIGHT_NUM];
        varying mediump float pointLightAttenuation[MAX_POINT_LIGHT_NUM];
    #endif
    #if (MAX_SPOT_LIGHT_NUM > 0)
        varying mediump vec3 vertexToSpotLightDirection[MAX_SPOT_LIGHT_NUM];
        varying mediump float spotLightAttenuation[MAX_SPOT_LIGHT_NUM];
    #endif

    varying mediump vec4 v_alpha;

    #if ((MAX_DIRECTIONAL_LIGHT_NUM > 0) || (MAX_POINT_LIGHT_NUM > 0) || (MAX_SPOT_LIGHT_NUM > 0))
        varying mediump vec3 v_normal;
    #endif
#else
    varying vec2 TextureCoordOut;
    varying vec3 viewDirection;

    #if (MAX_DIRECTIONAL_LIGHT_NUM > 0)
        varying vec3 dirLightDirection[MAX_DIRECTIONAL_LIGHT_NUM];
    #endif
    #if (MAX_POINT_LIGHT_NUM > 0)
        varying vec3 pointLightDirection[MAX_POINT_LIGHT_NUM];
        varying float pointLightAttenuation[MAX_POINT_LIGHT_NUM];
    #endif
    #if (MAX_SPOT_LIGHT_NUM > 0)
        varying vec3 vertexToSpotLightDirection[MAX_SPOT_LIGHT_NUM];
        varying float spotLightAttenuation[MAX_SPOT_LIGHT_NUM];
    #endif

    varying vec4 v_alpha;

    #if ((MAX_DIRECTIONAL_LIGHT_NUM > 0) || (MAX_POINT_LIGHT_NUM > 0) || (MAX_SPOT_LIGHT_NUM > 0))
        varying vec3 v_normal;
    #endif
#endif

uniform vec4 u_color;

#ifdef USE_BRDF
    uniform sampler2D u_sampler0;
#endif

#ifndef PI
#define PI 3.1415926535898
#endif

/***********************************************/
float clampAB(float a, float A, float B)
{
    #ifdef INTERNAL_CLAMP
        return clamp(a, A, B);
    #else
        return min(max(a, A), B);
    #endif
}

float clamp01(float a)
{
    #ifdef INTERNAL_CLAMP
        return clamp(a, 0.0, 1.0);
    #else
        return clampAB(a, 0.0, 1.0);
    #endif
}

float inverseLerp(float from, float to, float value)
{
    return (value - from)/(to - from);
}

vec3 lerp(vec3 from, vec3 to, float t)
{
    return from + t * (to - from);
}

vec4 powv(vec4 x, float y)
{
    return vec4(pow(x.x, y), pow(x.y, y), pow(x.z, y), pow(x.w, y));
}

vec3 computeLighting(vec3 normalVector, vec3 lightDirection, vec3 lightColor, float attenuation)
{
#ifdef USE_BRDF
    float NdotL = dot(normalVector, lightDirection);
    #ifdef SIMULATE_BOUNCE_LIGHTS
        float biasNdotL = clamp01(NdotL * 0.5 + 0.5);
        #ifdef HALF_LAMBERT
            vec3 halfDir = normalize(lightDirection + viewDirection);
            float NdotH = clamp01(dot(normalVector, halfDir));
        #else
            vec3 reflectDir = reflect(lightDirection, normalVector);
            float NdotH = clamp01(dot(normalVector, reflectDir));
        #endif
    #else
        float biasNdotL = max(NdotL, 0.0);
        float NdotH = 0.0;
        if (NdotL > 0.0) {
            #ifdef HALF_LAMBERT
                vec3 halfDir = normalize(lightDirection + viewDirection);
                NdotH = dot(normalVector, halfDir);
            #else
                vec3 reflectDir = reflect(lightDirection, normalVector);
                NdotH = dot(normalVector, reflectDir);
            #endif
        }
    #endif

    NdotH = 1.0 - NdotH;
    vec4 col = texture2D(u_sampler0, vec2(biasNdotL, NdotH));
    if (col.r > 0.5) 
        col += vec4(vec3(0.00206), 0.0);
    else 
        col += vec4(vec3(0.00196), 0.0);
    #ifdef GAMMA
        col = powv(col, GAMMA);
    #endif
 
    return  (texture2D(CC_Texture0 , TextureCoordOut).rgb * col.rgb + texture2D(CC_Texture0, TextureCoordOut).a * col.a)*lightColor;
#else
    float diffuse = max(dot(normalVector, lightDirection), 0.0);
    vec3 diffuseColor = lightColor  * diffuse;
    vec3 specular = vec3(0.0);
    if (diffuse > 0.0)
    {
        float specularStrength = 2.0;
        float shininess = 8.0;
        #ifdef HALF_LAMBERT
            vec3 reflectDir = reflect(lightDirection, normalVector);
            float spec = pow(max(dot(viewDirection, reflectDir), 0.0), shininess);
        #else
            vec3 halfDir = normalize(lightDirection + viewDirection);
            float spec = pow(max(dot(halfDir, viewDirection), 0.0), shininess);
        #endif
        specular = specularStrength * spec * lightColor;
    }
    return (diffuseColor + specular) * attenuation;
#endif
}

void main(void)
{
    #if ((MAX_DIRECTIONAL_LIGHT_NUM > 0) || (MAX_POINT_LIGHT_NUM > 0) || (MAX_SPOT_LIGHT_NUM > 0))
        vec3 normal  = normalize(v_normal);
    #endif
    
   vec4 combinedColor = vec4(u_AmbientLightSourceColor * texture2D(CC_Texture0, TextureCoordOut).rgb, 1.0);
    
    // Directional light contribution
    #if (MAX_DIRECTIONAL_LIGHT_NUM > 1)
        for (int i = 0; i < MAX_DIRECTIONAL_LIGHT_NUM; ++i)
        {
            combinedColor.xyz += computeLighting(normal, dirLightDirection[i], u_DirLightSourceColor[i], 1.0);
        }
    #endif

    #if(MAX_DIRECTIONAL_LIGHT_NUM == 1)
        combinedColor.xyz += computeLighting(normal, dirLightDirection[0], u_DirLightSourceColor[0], 1.0);
    #endif
    
    // Point light contribution
    #if (MAX_POINT_LIGHT_NUM > 1)
        for (int i = 0; i < MAX_POINT_LIGHT_NUM; ++i)
        {
            combinedColor.xyz += computeLighting(normal, pointLightDirection[i], u_PointLightSourceColor[i], pointLightAttenuation[i]);
        }
    #endif

    #if (MAX_POINT_LIGHT_NUM == 1)
        combinedColor.xyz += computeLighting(normal, pointLightDirection[0], u_PointLightSourceColor[0], pointLightAttenuation[0]);
    #endif

    // Spot light contribution
    #if (MAX_SPOT_LIGHT_NUM > 1)
        for (int i = 0; i < MAX_SPOT_LIGHT_NUM; ++i)
        {
            combinedColor.xyz += computeLighting(normal, vertexToSpotLightDirection[i], u_SpotLightSourceColor[i], spotLightAttenuation[i]);
        }
    #endif
    
    #if (MAX_SPOT_LIGHT_NUM == 1)
        combinedColor.xyz += computeLighting(normal, vertexToSpotLightDirection[0], u_SpotLightSourceColor[0], spotLightAttenuation[0]);
    #endif

    #if ((MAX_DIRECTIONAL_LIGHT_NUM > 0) || (MAX_POINT_LIGHT_NUM > 0) || (MAX_SPOT_LIGHT_NUM > 0))
        gl_FragColor = combinedColor * v_alpha;
    #else
        gl_FragColor = texture2D(CC_Texture0, TextureCoordOut) * v_alpha;
    #endif
}
